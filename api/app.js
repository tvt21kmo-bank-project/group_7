var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');

var kayttajaRouter = require('./routes/kayttaja');
var pankkikorttiRouter = require('./routes/pankkikortti');
var pankkitiliRouter = require('./routes/pankkitili');
var tilitapahtumaRouter = require('./routes/tilitapahtuma');
var kirjautuminenRouter = require('./routes/kirjautuminen');

var app = express();

app.use(helmet());
app.use(cors());
app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/kayttaja', kayttajaRouter);
app.use('/pankkikortti',pankkikorttiRouter);
app.use('/pankkitili', pankkitiliRouter);
app.use('/tilitilitapahtuma',tilitapahtumaRouter);
app.use('/kirjautuminen',kirjautuminenRouter);

module.exports = app;