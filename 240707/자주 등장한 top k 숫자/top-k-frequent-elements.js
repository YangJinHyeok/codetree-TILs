let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split('\n');

let [n , k] = input[0].split(" ").map(Number);
let arr = input[1].split(" ").map(Number);

let map = new Map();

arr.forEach((e)=>{
    map.set(e , map.has(e) ? map.get(e) + 1 : 1);
});

let max = 0;
let answer = [];
for(let [key , value] of map){
    max = Math.max(max , value);
}

for(let [key , value] of map){
    if(value === max) answer.push(key);
}
console.log(answer.sort((a , b)=> b - a).join(" "));