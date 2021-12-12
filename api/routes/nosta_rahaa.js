const express = require('express');
const router = express.Router();
const nosta_rahaa = require('../models/nosta_rahaa_models.js');


router.get('/:id',
function(request, response){
    if(request.params.id){
      nosta_rahaa.getById(request.params.id, function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    } else{
      nosta_rahaa.getAll(function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    }
});

router.put('/:id', 
function(request, response) {
  nosta_rahaa.update(request.params.id, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  })
  nosta_rahaa.tilitapahtuma(request.body, function(err, dbResult){
    if(err){
        response.json(err);
    }
    else{
        response.json(dbResult.affectedRows);
    }
})
});






module.exports = router;