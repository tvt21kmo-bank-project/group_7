const db = require('../database');
const router = require('../routes/nimi');

const nimi={
  getById: function(id, callback) {
      return db.query('SELECT etunimi, sukunimi, hetu, puhelinnumero, osoite FROM pankkikortti JOIN kayttaja ON kayttaja.idkayttaja = pankkikortti.idkayttaja WHERE pankkikorttiID = ?',[id], callback); 
    },
    getAll: function(callback) {
      return db.query('SELECT etunimi, sukunimi, hetu, puhelinnumero, osoite FROM pankkikortti JOIN kayttaja ON kayttaja.idkayttaja = pankkikortti.idkayttaja WHERE pankkikorttiID = ?', callback); 
    }
};


          
module.exports = nimi;