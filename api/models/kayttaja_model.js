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
      'insert into Kayttaja (idKayttaja,Etunimi,Sukunimi,Hetu,Osoite,Puhelin) values(?,?,?,?,?,?)',
      [Kayttaja.idKayttaja, Kayttaja.Etunimi, Kayttaja.Sukunimi, Kayttaja.Hetu, Kayttaja.Osoite, Kayttaja.Puhelin],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from Kayttaja where idKayttaja=?', [id], callback);
  },
  update: function(idKayttaja, Kayttaja, callback) {
    return db.query(
      'update Kayttaja set Etunimi=?,Sukunimi=?, Hetu=?, Osoite=?, Puhelin=? where idKayttaja=?',
      [Kayttaja.Etunimi, Kayttaja.Sukunimi, Kayttaja.Hetu, Kayttaja.Osoite, Kayttaja.Puhelin, idKayttaja],
      callback
    );
  }
};
module.exports = Kayttaja;