let fs = require("fs");
let input = fs.readFileSync(0).toString().split("\n");


const OFFSET = 100;
const MAX_R = 200;

let n = Number(input[0]);
let rects = input.slice(1 , n + 1).map((e) => e.split(" ").map(Number));
let checked = Array.from({length: MAX_R + 1} , () => Array(MAX_R + 1).fill(0));

rects.forEach((e , i) =>{
    let [x1 , y1 , x2 , y2] = e;
    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;

    for(let x = x1; x < x2; x++){
        for(let y = y1; y < y2; y++){
            checked[x][y] = i + 1;
        }
    }
})

let area = 0;
for(let x = 0; x <= MAX_R; x++){
    for(let y = 0; y <= MAX_R; y++){
        if(checked[x][y] === 2) area++;
    }
}
console.log(area);