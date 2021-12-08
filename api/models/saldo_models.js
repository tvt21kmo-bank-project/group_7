const db = require('../database');
const router = require('../routes/saldo');

const saldo={
  getById: function(id, callback) {
      return db.query('SELECT saldo, TiliNimi, Tilinumero FROM pankkikortti JOIN pankkitili ON pankkitili.idKayttaja = pankkikortti.idKayttaja WHERE pankkikorttiID = = ?',[id], callback); 
    }
};


          
module.exports = router;