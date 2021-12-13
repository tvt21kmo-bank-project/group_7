const db = require('../database');
const router = require('../routes/tth');

const tth = {
    getById: function(id, callback) {
        return db.query('select pvm_klo, Tapahtuma, Summa from tilitapahtuma where PankkikorttiID = ?', [id], callback);
    }

};

module.exports = tth;