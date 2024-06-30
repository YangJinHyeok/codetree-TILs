let fs = require("fs");
let input = fs.readFileSync(0).toString().split("\n");
let n = Number(input[0]);
let arr = input.slice(1).map((e)=>e.split(" "));
let answer = 0;

let flag = false;
let mapper = {
    'N' : 0,
    'E' : 1,
    'S' : 2,
    'W' : 3
}

let dx = [0 , 1 , 0 , -1];
let dy = [1 , 0 , -1 , 0];
let x = 0;
let y = 0;

function isCheck(x , y){
    return x === 0 && y === 0;
}

for(let i = 0; i < arr.length; i++){
    let [dir , t] = arr[i];
    let dirNum = mapper[dir];
    if(flag) break;

    for(let j = 0; j < Number(t); j++){
        let nx = x + dx[dirNum];
        let ny = y + dy[dirNum];
        if(!isCheck(nx , ny)){
            x = nx;
            y = ny;
            answer++;
        }
        else{
            flag = true;
            answer++;
            break; 
        }
    }
}
if(flag) console.log(answer);
else console.log(-1);