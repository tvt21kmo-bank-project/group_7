const db = require('../database');

const Kayttaja = {
  getById: function(id, callback) {
    return db.query('select * from Kayttaja where idKayttaja=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from Kayttaja', callback);
  },
  add: function(Kayttaja, callback) {
    return db.query(
      'insert into Kayttaja (idKayttaja,Etunimi,Sukunimi,Hetu,Osoite,Puhelinnumero) values(?,?,?,?,?,?)',
      [Kayttaja.idKayttaja, Kayttaja.Etunimi, Kayttaja.Sukunimi, Kayttaja.Hetu, Kayttaja.Osoite, Kayttaja.Puhelinnumero],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from Kayttaja where idKayttaja=?', [id], callback);
  },
  update: function(idKayttaja, Kayttaja, callback) {
    return db.query(
      'update Kayttaja set Etunimi=?,Sukunimi=?, Hetu=?, Osoite=?, Puhelinnumero=? where idKayttaja=?',
      [Kayttaja.Etunimi, Kayttaja.Sukunimi, Kayttaja.Hetu, Kayttaja.Osoite, Kayttaja.Puhelinnumero, idKayttaja],
      callback
    );
  }
};
module.exports = Kayttaja;