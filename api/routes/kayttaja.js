const express = require('express');
const router = express.Router();
const kayttaja = require('../models/kayttaja_model.js');

router.get('/:id?',
function(request, response){
    if(request.params.id){
        kayttaja.getById(request.params.id, function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    } else{
        kayttaja.getAll(function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    }
});


router.post('/', 
function(request, response) {
  kayttaja.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});


router.delete('/:idkayttaja', 
function(request, response) {
  kayttaja.delete(request.params.idkayttaja, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});


router.put('/:idkayttaja', 
function(request, response) {
  kayttaja.update(request.params.idkayttaja, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;