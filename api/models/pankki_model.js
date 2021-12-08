const pankki = require('../database');

const bank = {

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
    }
};
          
module.exports = bank;