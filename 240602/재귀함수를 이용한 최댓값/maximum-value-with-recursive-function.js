let fs = require("fs");

let input = fs.readFileSync(0).toString().split("\n");
let n = Number(input[0]);
let arr = input[1].split(" ").map(Number);
let answer = 0;

function main(n){
    if(n === 0) return arr[0];
    return Math.max(main(n - 1) , arr[n]);
}

console.log(main(n - 1))