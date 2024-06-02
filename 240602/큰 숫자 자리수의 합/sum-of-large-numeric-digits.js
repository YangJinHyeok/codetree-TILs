/* let fs = require("fs");
let input = fs.readFileSync(0).toString().split(" ").map(Number);
let arr = (input[0] * input[1] * input[2]).toString().split("").map(Number);

function main(n){
    if(n === 0) return arr[0];
    return main(n - 1) + arr[n];
}

let result = main(arr.length - 1);
console.log(result); */

const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split(" ");
const number = input[0] * input[1] * input[2];

function sum(n) {
    if(n < 10) {
        return n;
    }
    return sum(Math.floor(n / 10)) + sum(n % 10);
}

console.log(sum(number));