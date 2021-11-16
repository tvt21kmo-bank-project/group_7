const express = require('express');
const router = express.Router();
const pankkitili = require('../models/pankkitili_model.js');

router.get('/:id?',
function(request, response){
    if(request.params.id){
      pankkitili.getById(request.params.id, function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    } else{
      pankkitili.getAll(function(err, dbResult){
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
  pankkitili.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});


router.delete('/:idPankkitili', 
function(request, response) {
  pankkitili.delete(request.params.idPankkitili, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});


router.put('/:idPankkitili', 
function(request, response) {
  pankkitili.update(request.params.idPankkitili, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;