const db = require('../database');

const kayttaja = {
  getById: function(id, callback) {
    return db.query('select * from kayttaja where idkayttaja=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from kayttaja', callback);
  },
  add: function(kayttaja, callback) {
      return db.query(
      'insert into kayttaja (idkayttaja, etunimi, sukunimi, osoite, puhelinnumero, hetu) values(?,?,?,?,?,?)',
      [kayttaja.idkayttaja, kayttaja.etunimi, kayttaja.sukunimi, kayttaja.osoite, kayttaja.puhelinnumero, kayttaja.hetu], callback);
  },
  delete: function(id, callback) {
    return db.query('delete from kayttaja where idkayttaja=?', [id], callback);
  },
  update: function(idkayttaja, kayttaja, callback) {
    return db.query(
      'update kayttaja set Etunimi=?,Sukunimi=?, Hetu=?, Osoite=?, Puhelinnumero=? where idkayttaja=?',
      [kayttaja.etunimi, kayttaja.sukunimi, kayttaja.hetu, kayttaja.osoite, kayttaja.puhelinnumero, idkayttaja],
      callback
      );
    }
};
module.exports = kayttaja;