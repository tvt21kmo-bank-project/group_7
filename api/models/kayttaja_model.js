const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds=10;
const user={
  get: function(callback) {
    return db.query('select * from Kayttaja', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from Kayttaja where idKayttaja=?', [id], callback);
  },
  add: function(user, callback) {
    bcrypt.hash(user.password, saltRounds, function(err, hash) {
      return db.query('insert into kayttaja (username, password) values(?,?)',
      [user.username, hash], callback);
    });
  },
  delete: function(id, callback) {
    return db.query('delete from Kayttaja where idKayttaja=?', [id], callback);
  },
  update: function(id, user, callback) {
    bcrypt.hash(user.password, saltRounds, function(err, hash) {
      return db.query('update Kayttaja set username=?, password=? where id_user=?',
      [user.username, hash, id], callback);
    });
  }

}
          
module.exports = user;