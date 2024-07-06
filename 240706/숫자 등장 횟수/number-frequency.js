let fs = require("fs");
let input = fs.readFileSync(0).toString().split("\n");
let [n ,m] = input[0].split(" ").map(Number);
let arr = input[1].split(" ").map(Number);
let findNum = input[2].split(" ").map(Number);

let map = new Map();

for(let i = 0; i < arr.length; i++){
    map.set(arr[i] , map.has(arr[i]) ? map.get(arr[i]) + 1 : 1);
}

let answer = "";
for(let i of findNum){
    if(map.has(i)){
        answer += `${map.get(i) } `;
    }
    else answer += "0 ";
}
console.log(answer);