const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const kirjautuminen = require('../models/kirjautuminen_model');

router.post('/', 
  function(request, response) {
    if(request.body.pankkikorttiid && request.body.pinkoodi){
      const pankkikorttiid = request.body.pankkikorttiid;
      const pinkoodi = request.body.pinkoodi;
        kirjautuminen.checkPassword(pankkikorttiid, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(pinkoodi,dbResult[0].pinkoodi, function(err,compareResult) 
              {
                if(compareResult) {
                  console.log("succes");
                  response.send(true);
                }
                else {
                    console.log("wrong password");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("user does not exists");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("username or password missing");
      response.send(false);
    }
  }
);

module.exports=router;