let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let n = Number(input[0]);
let arr = input.slice(1).map((e) => e.split(" ").map(Number));
let visited = Array.from({length : n},  ()=> new Array(n).fill(false));
let answer = [];
let cnt = 1;


let dx = [1 , -1 , 0 , 0];
let dy = [0 , 0 , 1 , -1];

function inRange(x , y){
    return x >= 0 && x < n && y >= 0 && y < n;
}

function canGo(x , y){
    if(!inRange(x , y)) return false;
    if(visited[x][y] || arr[x][y] === 0) return false;
    return true; 

}

function dfs(x , y){

    visited[x][y] = true;

    for(let i = 0; i < 4; i++){
        let nx = x + dx[i];
        let ny = y + dy[i];
        if(canGo(nx , ny)){
            cnt++;
            dfs(nx , ny);
        }
    }

}

for(let i = 0; i < n; i++){
    for(let j = 0; j < n; j++){
        if(canGo(i , j)){
            cnt = 1;
            dfs(i , j);
            answer.push(cnt);
        }
    }
}
answer.sort((a , b) => a - b);
console.log(answer.length);
answer.forEach(num => console.log(num));