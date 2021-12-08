const express = require('express');
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
}
);


module.exports = router;