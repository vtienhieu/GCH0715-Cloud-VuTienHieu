// const { sumN, gtN } = require("./myLib");

// console.log(sumN(10));
// console.log(gtN(10));

function displayCurrenTime(res) {
  let d = new Date();
  let msg = `Hello ${d.getHours()}:${d.getMinutes()}:${d.getSeconds()}`;
  res.write(
    "hello world now is: " + msg
    //   d.getDate() +
    //   "\n" +
    //   d.getHours() +
    //   ":" +
    //   d.getMinutes()
  );
}

var http = require("http"); // import node.js core module

var server = http.createServer(function (req, res) {
  //   displayCurrenTime(res);
  //set response header
  // set response header
  if (req.url == "/") {
    res.writeHead(200, { "Content-Type": "text/html" });

    // set response content
    res.write(
      "<html><body> <a target='_blank' href='https://www.youtube.com/' style='color:red'>This is home Page.</a> <br> <a href='/login'>Login page </a> <br> <a href='/register'>register page </a> <br> "
    );
    displayCurrenTime(res);
    res.write("</body></html>");
    res.end();
  } else if (req.url == "/login") {
    res.writeHead(200, { "Content-Type": "text/html" });
    res.write(
      " <body style='background-color:green'> <p> login page </p> <a href='../'>back to homepage</a> </body> "
    );
    res.end();
  } else if (req.url == "/register") {
    res.writeHead(200, { "Content-Type": "text/html" });
    res.write(
      " <body style='background-color:yellow'> <p> register page </p> <a href='../'>back to homepage</a>  </body> "
    );
    res.end();
  } else {
    res.writeHead(404, { "Content-Type": "text/html" });
    res.write("unable to find this page");
    res.end();
  }
});

server.listen(3000); //listen for any incoming requests
