let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split('\n');
let n = Number(input[0]);
let a1 = input[1].split(" ").map(Number);
let a2 = input[2].split(" ").map(Number);
let a3 = input[3].split(" ").map(Number);
let a4 = input[4].split(" ").map(Number);

let map1 = new Map();
let map2 = new Map();
let map3 = new Map();
let map4 = new Map();

let answer = 0;

for(let i = 0; i < n; i++){
    map1.set(a1[i] , map1.has(a1[i]) ? map1.get(a1[i]) + 1 : 1);
    map2.set(a2[i] , map2.has(a2[i]) ? map2.get(a2[i]) + 1 : 1);
    map3.set(a3[i] , map3.has(a3[i]) ? map3.get(a3[i]) + 1 : 1);
    map4.set(a4[i] , map4.has(a4[i]) ? map4.get(a4[i]) + 1 : 1);
}

for(let [key1 , value1] of map1){
    for(let [key2 , value2] of map2){
        for(let [key3 , value3] of map3){
            for(let [key4 , value4] of map4){
                if(key1 + key2 + key3 + key4 === 0){
                    answer += value1 * value2 * value3 * value4
                }
            }
        }
    }
}
console.log(answer);