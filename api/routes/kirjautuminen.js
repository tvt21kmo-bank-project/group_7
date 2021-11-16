const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const kirjautuminen = require('../models/kirjautuminen_model');

router.post('/', 
  function(request, response) {
    if(request.body.PankkikorttiID && request.body.PINkoodi){
      const PankkikorttiID = request.body.PankkikorttiID;
      const PINkoodi = request.body.PINkoodi;
        kirjautuminen.checkPassword(PankkikorttiID, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(PINkoodi,dbResult[0].PINkoodi, function(err,compareResult) 
              {
                if(compareResult) {
                  console.log("Kirjautuminen onnistui!");
                  response.send(true);
                }
                else {
                    console.log("Väärä PIN-koodi");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("Pankkikorttia ID:tä ei löydy");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("Pankkikortin ID tai PIN-koodi puuttuu");
      response.send(false);
    }
  }
);

module.exports=router;