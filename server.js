const express= require('express');
const Uber = require('node-uber');

const uberRoute = require('./routes/uber/price')
var srv=express();

srv.set('view engine','hbs')
srv.set('views',__dirname + "/views")
srv.use(express.json());
srv.use(express.urlencoded({extended: true}));


srv.use('/public',express.static(__dirname + "/public"))

srv.use('/uber',uberRoute)
srv.listen(8080,()=>{
    console.log("server is running ar 8080");
})
