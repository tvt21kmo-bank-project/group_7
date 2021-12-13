var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

var kayttajaRouter = require('./routes/kayttaja');
var pankkikorttiRouter = require('./routes/pankkikortti');
var pankkitiliRouter = require('./routes/pankkitili');
var tilitapahtumaRouter = require('./routes/tilitapahtuma');
var kirjautuminenRouter = require('./routes/kirjautuminen');
var nimiRouter = require('./routes/nimi');
var tthRouter = require('./routes/tth');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/kayttaja', kayttajaRouter);
app.use('/pankkikortti',pankkikorttiRouter);
app.use('/pankkitili', pankkitiliRouter);
app.use('/tilitapahtuma',tilitapahtumaRouter);
app.use('/kirjautuminen',kirjautuminenRouter);
app.use('/nimi',nimiRouter);
app.use('/tth',tthRouter);

module.exports = app;
