const express = require('express');
const router = express.Router();
const nimi = require('../models/nimi_model.js');


router.get('/:id?',
function(request, response){
    if(request.params.id){
      nimi.getById(request.params.id, function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    } else{
      nimi.getAll(function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    }
});







module.exports = router;