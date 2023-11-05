var http = require('http');
var dt = require('./datemodule');

http.createServer(function (req, res) {
    res.writeHead(200, {'Content-Type': 'text/html'});
    res.write("Today is " + dt.myDateTime());
    res.end('Hello, World!');
}).listen(8080);