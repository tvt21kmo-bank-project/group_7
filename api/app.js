var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');
var app = express();
var mysql = require('mysql');
var connection  = require('./database');

var indexRouter = require('./routes/index');
var usersRouter = require('./routes/users');
var bankRouter = require('./routes/bank');
var kirjautuminenRouter = require('./routes/kirjautuminen');
var userRouter = require('./routes/user');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/users', usersRouter);
app.use('/bank', bankRouter);
app.use('/kirjautuminen', kirjautuminenRouter);
app.use('/user', userRouter);

module.exports = app;
