let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split('\n');
let str = input[0].split("");
let flag = false;
let answer = "";

let map = new Map();

str.forEach((e) =>{
    map.set(e , map.has(e) ? map.get(e) + 1 : 1);
});

for(let [key , value] of map){
    if(value === 1){
        flag = true;
        answer = key;
        break;
    }
}

if(flag) console.log(answer);
else console.log("None");