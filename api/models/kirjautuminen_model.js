const db = require('../database');

const login={
  checkPassword: function(username, callback) {
      return db.query('SELECT PINkoodi FROM Pankkikortti WHERE PankkikorttiID = ?',[username], callback); 
    }
};
          
module.exports = login;