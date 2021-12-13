const pankki = require('../database');

const bank = {
    tarkistus: function(id, callback){
        return pankki.query('SELECT saldo FROM pankkikortti JOIN pankkitili ON pankkitili.idkayttaja = pankkikortti.idkayttaja WHERE pankkikorttiID = ?',[id], callback)
    },
    lahjoitus: function(postData, callback){
        return pankki.query('UPDATE pankkitili JOIN pankkikortti ON pankkitili.idPankkitili=pankkikortti.idPankkitili SET pankkitili.saldo=pankkitili.saldo-? WHERE pankkikortti.pankkikorttiID=?',
        [postData.summa, postData.pankkikortti], callback);
    },
    siirto: function(postData, callback){
        return pankki.query('UPDATE pankkitili SET pankkitili.Saldo=pankkitili.Saldo+? WHERE idPankkitili=5',
        [postData.saatusumma],
        callback);
    },
    tilitapahtuma: function(postData, callback){
        return pankki.query('INSERT INTO tilitapahtuma VALUES (NULL, NOW(), "Lahjoitus", -?, ?)',
        [postData.maara, postData.lahjoittaja],
        callback);
    },
    tilitapahtumalahj: function(postData, callback){
        return pankki.query('INSERT INTO tilitapahtuma VALUES (NULL, NOW(), "Saapunut lahjoitus", ?, 65)',
        [postData.saatusumma],
        callback);
    }
};
          
module.exports = bank;