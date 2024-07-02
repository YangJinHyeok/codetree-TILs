let fs = require("fs");
let input = fs.readFileSync(0).toString().split('\n');
let [n , m] = input[0].split(" ").map(Number);
let arr = input.slice(1).map((e) => e.split(" ").map(Number));

let range = Array.from({length : n} , ()=> new Array(n).fill(0));

let dx = [1 , 0 , -1 , 0];
let dy = [0 , -1 , 0 , 1];

function inRange(x , y){
    return x >= 0 && x < n && y >= 0 && y < n && range[x][y] === 1;
}

function isChecked(x , y){
    let cnt = 0;
    for(let i = 0; i < 4; i++){
        let nx = x + dx[i];
        let ny = y + dy[i];
        if(inRange(nx , ny)) cnt++;
    }
    return cnt;
}

for(let i = 0; i < arr.length; i++){
    let [x , y] = arr[i];
    range[x - 1][y - 1] = 1;
    if(isChecked(x - 1 , y - 1) === 3){
        console.log(1);
    }
    else{
        console.log(0);
    }
}