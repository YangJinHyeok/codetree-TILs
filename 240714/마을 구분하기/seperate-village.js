let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let n = Number(input[0]);
let arr = input.slice(1).map((e) => e.split(" ").map(Number));
let visited = Array.from({length : n},  ()=> new Array(n).fill(false));
let answer = [];
let cnt = 0;


let dx = [1 , -1 , 0 , 0];
let dy = [0 , 0 , 1 , -1];

function inRange(x , y){
    return x >= 0 && x < n && y >= 0 && y < n;
}

function dfs(x , y){
    if(visited[x][y] || arr[x][y] === 0) return;

    visited[x][y] = true;
    cnt++;

    for(let i = 0; i < 4; i++){
        let nx = x + dx[i];
        let ny = y + dy[i];
        if(inRange(nx , ny) && arr[nx][ny] === 1){
            x = nx;
            y = ny;
            dfs(x , y);
        }
    }

}

for(let i = 0; i < n; i++){
    for(let j = 0; j < n; j++){
        if(!visited[i][j] && arr[i][j] === 1) dfs(i , j);
        if(cnt > 0){
            answer.push(cnt);
            cnt = 0;
        
        }
    }
}
answer.sort((a , b) => a - b);
console.log(answer.length);
for(let i = 0; i < answer.length; i++) console.log(answer[i]);