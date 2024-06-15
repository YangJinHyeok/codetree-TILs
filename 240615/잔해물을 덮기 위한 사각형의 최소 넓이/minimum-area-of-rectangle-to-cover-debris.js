let fs = require("fs");
let input = fs.readFileSync(0).toString().split("\n");


const OFFSET = 1000;
const MAX_R = 2000;

let rects = input.map((e) => e.split(" ").map(Number));
let checked = Array.from({length: MAX_R + 1} , () => Array(MAX_R + 1).fill(0));

rects.forEach((e,  i) => {
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
});

let flag = false;
let min_x = MAX_R , max_x = 0 , min_y = MAX_R, max_y = 0;
for(let x = 0; x <= MAX_R; x++){
    for(let y = 0; y <= MAX_R; y++){
        if(checked[x][y] === 1){
            flag = true;
            min_x = Math.min(min_x , x);
            min_y = Math.min(min_y , y);
            max_x = Math.max(max_x , x);
            max_y = Math.max(max_y , y);
        }
    }
}

if(!flag) console.log(0);
else{
    console.log((max_x - min_x + 1) * (max_y - min_y + 1))
}