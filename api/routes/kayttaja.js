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
  Kayttaja.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});


router.delete('/:idKayttaja', 
function(request, response) {
  kayttaja.delete(request.params.idKayttaja, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});


router.put('/:idKayttaja', 
function(request, response) {
  kayttaja.update(request.params.idKayttaja, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;