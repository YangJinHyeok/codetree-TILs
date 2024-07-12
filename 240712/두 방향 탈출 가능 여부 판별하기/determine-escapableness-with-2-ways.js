let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split('\n');

let [n , m] = input[0].split(' ').map(Number);
let arr = input.slice(1).map((e) => e.split(' ').map(Number));
let visited = Array.from({length: n} , () => new Array(n).fill(false));
let flag = false;

let dx = [-1 , 0];
let dy = [0 , 1];


function inRange(x,  y){
    return x >= 0 && x < n && y >= 0 && y < n;
}
function dfs(x , y){
    if(x === n - 1 && y === n - 1){
        flag = true;
        return;
    }
    visited[x][y] = true;

    for(let i = 0; i < 2; i++){
        let nx = x + dx[i];
        let ny = y + dy[i];
        if(inRange(nx , ny) && arr[nx][ny] === 1 && !visited[nx][ny]){
            visited[nx][ny] = true;
            x = nx;
            y = ny;
            dfs(x , y);
        }
    }
}

dfs(0 , 0)

if(flag) console,log(1);
else console.log(0);