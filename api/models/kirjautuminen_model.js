const db = require('../database');


const login={
  checkPassword: function(PankkikorttiID, callback) {
      return db.query('SELECT PINkoodi FROM Pankkikortti WHERE PankkikorttiID = ?',[PankkikorttiID], callback); 
    }
};
          
module.exports = login;