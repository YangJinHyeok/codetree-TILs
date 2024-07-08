let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split('\n');
let n = Number(input[0]);
let arr = input.slice(1).map((e) => e.split(" ").map(Number));
let answer = 0;

let map = new Map();
arr.forEach((e) =>{
    let [x , y] = e;
    map.set(x , map.has(x) ? map.get(x) < y ? map.get(x) : y : y);
});

for(let [key , value] of map) answer += value;
console.log(answer);