let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let n = input[0].split(" ").map(Number);
let arr = input.slice(1).map((e) => e.split(" ").map(Number));
let visited = Array.from({length : n} , () => new Array(n).fill(false));
let blockCount = 0;
let blockSize = 0;
let count = 0;

let dx = [1 , -1 , 0 , 0];
let dy = [0 , 0 , 1 , -1];

function inRange(x , y){
    return 0 <= x && x < n && 0 <= y && y < n;
}

function canGo(x , y , cur){
    if(!inRange(x,  y)) return false;
    if(arr[x][y] !== cur || visited[x][y]) return false;
    return true;
}
function dfs(x , y , cur){
    visited[x][y] = true;

    for(let i = 0; i < 4; i++){
        let nx = x + dx[i];
        let ny = y + dy[i];
        if(canGo(nx , ny , cur)){
            count++;
            dfs(nx, ny , cur);
        }
    }


}

for(let i = 0; i < n; i++){
    for(let j = 0; j < n; j++){
        if(canGo(i , j , arr[i][j])){
            count = 1;
            dfs(i , j , arr[i][j]);
            blockSize = Math.max(blockSize , count);
            if(count >= 4) blockCount++;
        }
    }
}

console.log(`${blockCount} ${blockSize}`);