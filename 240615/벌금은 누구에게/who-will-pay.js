let fs = require("fs");
let input = fs.readFileSync(0).toString().split('\n');

let [n , m , k] = input[0].split(" ").map(Number);
let student = Array.from({length: n} , ()=> [k]);

for(let i = 0; i < m; i++){
    let t = Number(input[i + 1]);
    student[t - 1] -= 1;
    if(student[t - 1] === 0) return console.log(t);
}
console.log(-1);