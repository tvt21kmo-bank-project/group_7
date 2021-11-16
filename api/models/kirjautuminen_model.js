const db = require('../database');

const kirjautuminen={
  checkPassword: function(PankkikorttiID, callback) {
      return db.query('SELECT PINkoodi FROM Pankkikortti WHERE PankkikorttiID = ?',[PankkikorttiID], callback); 
    }
};
          
module.exports = kirjautuminen;