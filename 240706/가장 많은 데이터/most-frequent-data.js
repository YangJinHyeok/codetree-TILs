let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let n = Number(input[0]);
let arr = input.slice(1);

let map = new Map();
arr.forEach((e,  i) => {
    map.set(e , map.has(e) ? map.get(e) + 1 : 1);
})

let answer = 0;
for(let [key , value] of map){
    answer = Math.max(answer , value)
}
console.log(answer);