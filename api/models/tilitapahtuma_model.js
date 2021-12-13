const db = require('../database');

const tilitapahtuma = {
  getById: function(id, callback) {
    return db.query('select * from tilitapahtuma where idPankkitili=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tilitapahtuma', callback);
  },
  add: function(tilitapahtuma, callback) {
    return db.query(
      'insert into tilitapahtuma (idPankkitili, idKayttaja, pvm_klo , Tapahtuma, Summa, PankkikorttiID ) values(?,?,?,?,?,?)',
      [tilitapahtuma.idPankkitili, tilitapahtuma.idkayttaja, tilitapahtuma.pvm_klo, tilitapahtuma.Tapahtuma, tilitapahtuma.Summa, tilitapahtuma.PankkikorttiID],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tilitapahtuma where idTilitapahtumat=?', [id], callback);
  },
  update: function(idTilitapahtumat, tilitapahtuma, callback) {
    return db.query(
      'update tilitapahtuma set pvm_klo=?, Tapahtuma=?,Summa=?, idPankkitili=?, idKayttaja=? where idTilitapahtumat=?',
      [tilitapahtuma.pvm_klo, tilitapahtuma.Tapahtuma, tilitapahtuma.Summa, tilitapahtuma.idPankkitili, tilitapahtuma.idkayttaja, idTilitapahtumat],
      callback
    );
  }
};
module.exports = tilitapahtuma;