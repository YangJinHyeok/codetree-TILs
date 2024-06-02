let fs = require("fs");

let input = fs.readFileSync(0).toString().split("\n");
let [n , k] = input[0].split(" ").map(Number);
let arr = input[1].split(" ").map(Number).sort((a , b) => a - b);
console.log(arr[k - 1]);