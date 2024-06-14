let fs = require("fs");
let input = fs.readFileSync(0).toString().split("\n");

const OFFSET = 100;
const MAX = 200;

let n = Number(input[0]);
let rects = input.slice(1 , n + 1).map((e) => e.split(" ").map(Number));
let check = Array.from({length: MAX + 1} , () => Array(MAX + 1).fill(0));

rects.forEach((e) =>{
    let [x1 , y1] = e;
    x1 += OFFSET;
    y1 += OFFSET;

    for(let x = x1; x < x1 + 8; x++){
        for(let y = y1; y < y1 + 8; y++){
            check[x][y] = 1;
        }
    }
})

let area = 0;
for(let x = 0;  x <= MAX; x++){
    for(let y = 0;  y <= MAX; y++){
        if(check[x][y] === 1) area++
    }
}
console.log(area);