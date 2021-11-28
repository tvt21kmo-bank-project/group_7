const db = require('../database');

const nosta_rahaa={
  getById: function(id, callback) {
      return db.query('SELECT etunimi, sukunimi, hetu, puhelinnumero, osoite, saldo FROM pankkikortti JOIN kayttaja ON kayttaja.idkayttaja = pankkikortti.idkayttaja JOIN pankkitili ON pankkikortti.idkayttaja = pankkitili.idkayttaja WHERE pankkikorttiID = ?',[id], callback); 
    },


update: function(id, pankkitili, callback) {
  return db.query(
    'update pankkitili JOIN pankkikortti on pankkikortti.idPankkitili = pankkitili.idPankkitili set saldo=? where pankkikorttiID=?',
    [pankkitili.Saldo, id],
    callback
    );
  }

};
          
module.exports = nosta_rahaa;