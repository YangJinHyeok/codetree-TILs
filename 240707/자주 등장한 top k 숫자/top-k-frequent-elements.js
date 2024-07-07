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
    answer.push([key , value]);
}

answer.sort((a , b) =>{
    if(a[1] === b[1]) return b[0] - a[0];
    return b[1] - a[1];
});

let result = [];
for(let i = 0; i < k; i++){
    result.push(answer[i][0]);
}
console.log(result.join(" "));