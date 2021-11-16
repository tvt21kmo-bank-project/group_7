var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');
var app = express();

app.use(helmet());
app.use(cors());
const dotenv = require('dotenv');
dotenv.config();
const basicAuth = require('express-basic-auth');
app.use(basicAuth( { authorizer: myAuthorizer, authorizeAsync:true, } ))

function myAuthorizer(username, password, cb){
    if(PankkitiliID===process.env.authUser && PINkoodi ===process.env.authPass){
        return cb(null, true);
    }
    else{
        return cb(null, false);
    }
}


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
