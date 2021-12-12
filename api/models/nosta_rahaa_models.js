const db = require('../database');

const nosta_rahaa={
  getById: function(id, callback) {
      return db.query('SELECT etunimi, sukunimi, hetu, puhelinnumero, osoite, saldo, luottoraja FROM pankkikortti JOIN kayttaja ON kayttaja.idkayttaja = pankkikortti.idkayttaja JOIN pankkitili ON pankkikortti.idkayttaja = pankkitili.idkayttaja WHERE pankkikorttiID = ?',[id], callback); 
    },

  add: function(tilitapahtuma, callback) {
      return db.query(
      'insert into tilitapahtuma values(NULL, now(),"Nosto"?,?)',
    [tilitapahtuma.idTilitapahtuma, tilitapahtuma.pvm_klo, tilitapahtuma.tapahtuma, tilitapahtuma.summa, tilitapahtuma.pankkikorttiID], callback);
    },


update: function(id, pankkitili,  callback) {
  return db.query(
    'update pankkitili JOIN pankkikortti on pankkikortti.idPankkitili = pankkitili.idPankkitili set Saldo=? where pankkikorttiID=?',
    [pankkitili.Saldo,  id],
    callback
    );
  }

};
          
module.exports = nosta_rahaa;