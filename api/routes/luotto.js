const express = require('express');
const router = express.Router();
const luotto = require('../models/luotto_model.js');

router.put('/:id', 
function(request, response) {
  luotto.update(request.params.id, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});






module.exports = router;