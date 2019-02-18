const express= require('express');
var Uber = require('node-uber');
var app=express();
app.use(express.json());
app.use(express.urlencoded({extended: true}));

var uber = new Uber({
    client_id: 't7YNqBpiTW6qeZIIsK7CCM9j53xgLRi2',
    client_secret: 'q1V762AoNbldGoSrkTY4AokhIY9uStVKVgUDN9sl',
    server_token: 'b5CSK4lkOQfjSLgLGI6eE46nH0wlrIBTI5h4eA9w',
    redirect_uri: 'http://localhost:8080/index',
    name: 'APP_NAME',

    language: 'en_US', // optional, defaults to en_US
    sandbox: true, // optional, defaults to false
    // proxy: 'http' // optional, defaults to none
});
app.get('/api/login', function(request, response) {
    var url = uber.getAuthorizeUrl(['history','profile', 'request', 'places']);
    response.redirect(url);
});
app.get('/api/callback', function(request, response) {
    uber.authorization({
        authorization_code: request.query.code
    }, function(err, res) {
        if (err) {
            console.error(err);
        } else {
            // store the user id and associated properties:
            // access_token = res[0], refresh_token = res[1], scopes = res[2]),and token expiration date = res[3]
            console.log('New access_token retrieved: ' + res[0]);
            console.log('... token allows access to scopes: ' + res[2]);
            console.log('... token is valid until: ' + res[3]);
            console.log('... after token expiration, re-authorize using refresh_token: ' + res[1]);

            // redirect the user back to your actual app
            response.redirect('localhost:8080/index');
        }
    });
});
app.get('/api/products', function(request, response) {
    // extract the query from the request URL
    var query = url.parse(request.url, true).query;

    // if no query params sent, respond with Bad Request
    if (!query || !query.lat || !query.lng) {
        response.sendStatus(400);
    } else {
        uber.products.getAllForLocationAsync(query.lat, query.lng)
            .then(function(res) {
                response.json(res);
            })
            .error(function(err) {
                console.error(err);
                response.sendStatus(500);
            });
    }
});
app.get('/index',(req,res)=>{
    res.send("hello");
})
app.listen(8080,()=>{
    console.log("server is running ar 8080");
})
uber.products.getAllForLocation(28.572044, 77.324918, function (err, res) {
    if (err) console.error(err);
    else console.log(res);
});
uber.products.getByID('d4abaae7-f4d6-4152-91cc-77523e8165a4', function (err, res) {
    if (err) console.error(err);
    else console.log(res);
});