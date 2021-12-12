const express = require('express');
const { append } = require('express/lib/response');
const { Forever } = require('forever');
const { start } = require('forever/lib/forever/cli');
const router = express.Router();
const bank = require('../models/pankki_model');

router.post('/lahjoitus', function(request, response){
    bank.lahjoitus(request.body, function(err, dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult.affectedRows);
        }
    })
    bank.siirto(request.body, function(err, dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult.affectedRows);
        }
    })
    bank.tilitapahtuma(request.body, function(err, dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult.affectedRows);
        }
    })
    bank.tilitapahtumalahj(request.body, function(err, dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult.affectedRows);
        }
    })
});
router.get('/:id',
function(request, response){
    if(request.params.id){
      bank.tarkistus(request.params.id, function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    } else{
      bank.getAll(function(err, dbResult){
            if (err){
                response.json(err);
            } else{
                response.json(dbResult);
            }
        });
    }
});


module.exports = router;