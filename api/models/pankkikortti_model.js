const db = require('../database');
const bcrypt = require('bcryptjs');

const pankkikortti = {
  getById: function(id, callback) {
    return db.query('select * from pankkikortti where idkayttaja=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from pankkikortti', callback);
  },
  add: function(pankkikortti, callback) {
    
      bcrypt.hash(pankkikortti.pinkoodi,10,function(err,hash){
        return db.query(
      'insert into pankkikortti (idkayttaja,idpankkitili,pankkikorttiid,pinkoodi,credit,luottoraja,debit) values(?,?,?,?,?,?,?)',
      [pankkikortti.idkayttaja, pankkikortti.idpankkitili, pankkikortti.pankkikorttiid, hash, pankkikortti.debit,pankkikortti.luottoraja, pankkikortti.credit],
      callback);});
      
  },
  delete: function(id, callback) {
    return db.query('delete from pankkikortti where idkayttaja=?', [id], callback);
  },
  update: function(id, pankkikortti, callback) {

    bcrypt.hash(pankkikortti.pinkoodi,10,function(err,hash){
    return db.query(
      'update pankkikortti set pinkoodi=?,pankkikorttiid=? where idkayttaja=?',
      [hash, pankkikortti.pankkikorttiid, id],
      callback);});
  }
};
module.exports = pankkikortti;