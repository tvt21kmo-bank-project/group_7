const db = require('../database');

const tilitapahtuma = {
  getById: function(id, callback) {
    return db.query('select * from tilitapahtuma where idTilitapahtumat=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tilitapahtuma', callback);
  },
  add: function(tilitapahtuma, callback) {
    return db.query(
      'insert into tilitapahtuma (idTilitapahtumat, idPankkitili, idPankkitili, pvm_klo , Tapahtuma, Summa, PankkikorttiID ) values(?,?,?,?,?,?,?,?)',
      [tilitapahtuma.idTilitapahtumat, tilitapahtuma.idPankkitili, tilitapahtuma.idPankkitili, tilitapahtuma.pvm_klo, tilitapahtuma.Tapahtuma, tilitapahtuma.Summa, tilitapahtuma.PankkikorttiID],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tilitapahtuma where idTilitapahtumat=?', [id], callback);
  },
  update: function(idTilitapahtumat, tilitapahtuma, callback) {
    return db.query(
      'update tilitapahtuma set pvm_klo=?, Tapahtuma=?,Summa=?, idPankkitili=?, idKayttaja=? where idTilitapahtumat=?',
      [tilitapahtuma.pvm_klo, tilitapahtuma.Tapahtuma, tilitapahtuma.Summa, tilitapahtuma.PankkikorttiID, tilitapahtuma.idPankkitili, idTilitapahtumat],
      callback
    );
  }
};
module.exports = tilitapahtuma;