const fs = require("fs");
let text = "Hello i am first file created tn node js";
fs.writeFileSync("firstfile.txt", text);
console.log("Created a new file");

let text1 = fs.readFileSync("firstfile.txt", "utf-8");
text1 = text1.replace("js","js by Akash Sharma");

fs.writeFileSync("firstfile.txt", text1);
console.log("Replaced successfully");