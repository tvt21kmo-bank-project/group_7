const db = require('../database');

const luotto={
update: function(id, pankkikortti, callback) {
  return db.query(
    'update pankkikortti set luottoraja=? where pankkikorttiID=?',
    [pankkikortti.luottoraja, id],
    callback
    );
  }

};
          
module.exports = luotto;