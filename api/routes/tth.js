const express = require('express');
const router = express.Router();
const tth = require('../models/tth_model.js');

router.get('/:id?',
function(request, response){
    if(request.params.id){
        tth.getById(request.params.id, function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    } else{
        tth.getAll(function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    }
});

module.exports = router;