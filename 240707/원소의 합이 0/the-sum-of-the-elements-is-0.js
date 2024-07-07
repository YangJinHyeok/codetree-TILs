let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split('\n');
let n = Number(input[0]);
let a1 = input[1].split(" ").map(Number);
let a2 = input[2].split(" ").map(Number);
let a3 = input[3].split(" ").map(Number);
let a4 = input[4].split(" ").map(Number);

let map = new Map();
let answer = 0;



for(let i = 0; i < n; i++){
    for(let j = 0; j < n; j++){
        let sum = a1[i] + a2[j];
        map.set(sum , map.has(sum) ? map.get(sum) + 1 : 1);
    }
}

for(let i = 0; i < n; i++){
    for(let j = 0; j < n; j++){
        let diff = -(a3[i] + a4[j]);
        if(map.has(diff)) answer += map.get(diff);
    }
}

console.log(answer);