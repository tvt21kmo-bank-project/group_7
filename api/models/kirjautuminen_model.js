const db = require('../database');

const kirjautuminen={
  checkPassword: function(pankkikorttiid, callback) {
      return db.query('SELECT pinkoodi FROM pankkikortti WHERE pankkikorttiid = ?',[pankkikorttiid], callback); 
    }
};
          
module.exports = kirjautuminen;