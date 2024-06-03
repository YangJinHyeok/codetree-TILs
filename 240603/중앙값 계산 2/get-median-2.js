let fs = require("fs");
let input = fs.readFileSync(0).toString().split("\n");
let n = Number(input[0]);
let t = input[1].split(" ").map(Number);
let answer = [];
let arr = [];
for(let i = 0; i < n; i++) arr.push(t[i]);

for(let i = 1; i <= n; i++){
    if(i % 2 === 1){
        let temp = arr.slice(0 , i).sort((a , b) => a - b);
        answer.push(temp[parseInt(temp.length / 2)]);
    }
}
console.log(answer.join(" "));