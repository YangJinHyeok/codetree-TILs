let fs = require("fs");
let input = fs.readFileSync(0).toString().split("\n");
let arr = input[0].split("");

let x = 0;
let y = 0;
let dirNum = 3;
let dx = [1 , 0 , -1 , 0] , dy = [0 , -1 , 0 , 1];

for(let i = 0; i < arr.length; i++){
    if(arr[i] === 'L'){
        dirNum = (dirNum + 3) % 4;
    }
    else if(arr[i] === 'R'){
        dirNum = (dirNum + 1) % 4;
    }
    else{
        x += dx[dirNum];
        y += dy[dirNum];
    }
}
console.log(`${x} ${y}`);