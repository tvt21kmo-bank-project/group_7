const db = require('../database');
const router = require('../routes/saldo');

const saldo={
  getById: function(id, callback) {
      return db.query('SELECT saldo, tiliNimi, tilinumero FROM pankkikortti JOIN pankkitili ON pankkitili.idKayttaja = pankkikortti.idKayttaja WHERE pankkikorttiid = ?',[id], callback); 
    },
    getAll: function(callback) {
      return db.query('SELECT saldo, tiliNimi, tilinumero FROM pankkikortti JOIN pankkitili ON pankkitili.idKayttaja = pankkikortti.idKayttaja WHERE pankkikorttiid = ?', callback); 
    }
};


          
module.exports = saldo;