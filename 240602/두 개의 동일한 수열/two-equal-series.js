let fs = require("fs");

let input = fs.readFileSync(0).toString().split("\n");
let arr1 = input[1].split(" ").map(Number).sort((a , b) => a - b);
let arr2 = input[2].split(" ").map(Number).sort((a , b) => a - b);
let flag = true;

for(let i = 0; i < arr1.length; i++){
    if(arr1[i] !== arr2[i]) flag = false;
}

if(flag) console.log("Yes");
else console.log("No");