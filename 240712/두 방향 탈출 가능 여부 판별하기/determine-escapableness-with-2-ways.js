let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split('\n');

let [n , m] = input[0].split(' ').map(Number);
let arr = input.slice(1).map((e) => e.split(' ').map(Number));
let visited = Array.from({length: n} , () => new Array(m).fill(false));
let flag = false;

let dx = [1 , 0];
let dy = [0 , 1];

function canGo(x , y){
    if(!inRange(x , y)) return false;
    if(visited[x][y] || arr[x][y] === 0) return false;
    return true;
}

function inRange(x,  y){
    return x >= 0 && x < n && y >= 0 && y < m;
}
function dfs(x , y){
    if(x === n - 1 && y === m - 1){
        flag = true;
        return;
    }
    visited[x][y] = true;

    for(let i = 0; i < 2; i++){
        let nx = x + dx[i];
        let ny = y + dy[i];
        if(canGo(nx,  ny)){
            dfs(nx , ny);
        }
    }
}

dfs(0 , 0)

if(flag) console.log(1);
else console.log(0);