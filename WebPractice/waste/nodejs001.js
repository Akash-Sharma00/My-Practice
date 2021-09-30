// console.log("Hello wolrd")

const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
//   res.end('Hello World')
  res.end(`<!DOCTYPE html>
  <html lang="en">
  <head>
      <meta charset="UTF-8">
      <meta http-equiv="X-UA-Compatible" content="IE=edge">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>Flex-Box</title>
      <style>
          .container{
              border: 2px solid black;
              height: 500px;
              width: 1100px;
              display: flex;
              justify-content: center;
              align-items: center;
          }
          .item{
              width: 200px;
              height: 200px;
              border: 2px solid green;
              background-color: tomato;
              margin: 15px;
              padding: 5px;
          }
      </style>
  </head>
  <body>
      <div class="container">
          <div class="item" id="item-1">This is box one</div>
          <div class="item" id="item-2">This is box second</div>
          <div class="item" id="item-3">This is box third</div>
      </div>
  </body>
  </html>`);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});