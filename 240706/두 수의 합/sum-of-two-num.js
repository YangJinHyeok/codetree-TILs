let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split('\n');

let [n , k] = input[0].split(' ').map(Number);
let arr = input[1].split(" ").map(Number);
let answer = 0;

let map = new Map();
arr.forEach((e) => {
    map.set(e , map.has(e) ? map.get(e) + 1 : 1);
});

for(let [key , value] of map){
    for(let [key2 , value2] of map){
        if(key + key2 === k){
            answer++;
        }
    }
}
console.log(answer / 2);