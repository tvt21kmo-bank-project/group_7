const db = require('../database');

const Pankkitili = {
  getById: function(id, callback) {
    return db.query('select * from Pankkitili where idPankkitili=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from Pankkitili', callback);
  },
  add: function(Pankkitili, callback) {
    return db.query(
      'insert into Pankkitili (idPankkitili, idKayttaja, Saldo, Tilinimi, Tilinumero) values(?,?,?,?,?)',
      [Pankkitili.idPankkitili, Pankkitili.idKayttaja, Pankkitili.Saldo, Pankkitili.TiliNimi, Pankkitili.Tilinumero],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from Pankkitili where idPankkitili=?', [id], callback);
  },
  update: function(id, Pankkitili, callback) {
    return db.query(
      'update Pankkitili set Saldo=?, TiliNimi=?, Tilinumero=? where idPankkitili=?',
      [Pankkitili.Saldo, Pankkitili.TiliNimi, Pankkitili.Tilinumero, id],
      callback
    );
  }
};
module.exports = Pankkitili;