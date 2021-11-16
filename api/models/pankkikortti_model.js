const db = require('../database');
const bcrypt = require('bcryptjs');

const Pankkikortti = {
  getById: function(id, callback) {
    return db.query('select * from Pankkikortti where idKayttaja=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from Pankkikortti', callback);
  },
  add: function(Pankkikortti, callback) {
    
      bcrypt.hash(Pankkikortti.PIN,10,function(err,hash){
        return db.query(
      'insert into Pankkikortti (idKayttaja,idTili,PIN,PankkikorttiID) values(?,?,?,?)',
      [Pankkikortti.idKayttaja, Pankkikortti.idTili, hash, Pankkikortti.PankkikorttiID],
      callback);});
      
  },
  delete: function(id, callback) {
    return db.query('delete from Pankkikortti where idKayttaja=?', [id], callback);
  },
  update: function(id, Pankkikortti, callback) {

    bcrypt.hash(Pankkikortti.PIN,10,function(err,hash){
    return db.query(
      'update Pankkikortti set PIN=?,PankkikorttiID=? where idKayttaja=?',
      [hash, Pankkikortti.PankkikorttiID, id],
      callback);});
  }
};
module.exports = Pankkikortti;