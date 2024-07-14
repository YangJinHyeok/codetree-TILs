let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let [n, m] = input[0].split(" ").map(Number);
let arr = input.slice(1).map((e) => e.split(" ").map(Number));
let answer = [];
let maxNum = 0;

arr.forEach((e) => {
    e.forEach((e) => {
        maxNum = Math.max(e , maxNum);
    })
});

let dx = [1 , -1 , 0 , 0];
let dy = [0 , 0 , 1,  -1];

function inRange(x,  y){
    return 0 <= x && x < n && 0 <= y && y < m;
}

function canGo(x , y , visited){
    if(!inRange(x , y)) return false;
    if(visited[x][y]) return false;
    return true;
}

function dfs(x , y,  visited){
    visited[x][y] = true;

    for(let i = 0; i < 4; i++){
        let nx = x + dx[i];
        let ny = y + dy[i];
        if(canGo(nx , ny , visited)){
            dfs(nx, ny , visited);
        }
    }
}


for(let k = 1; k <= maxNum; k++){
    let visited = Array.from({length : n} , () => new Array(m).fill(false));
    let count = 0;

    for(let i = 0; i < n; i < i++){
        for(let j = 0; j < m; j++){
            if(arr[i][j] <= k) visited[i][j] = true;
        }
    }

    for(let i = 0; i < n; i < i++){
        for(let j = 0; j < m; j++){
            if(canGo(i , j , visited)){
                count += 1;
                dfs(i , j , visited);
            }
        }
    }

    answer.push([k , count]);

}

answer.sort((a , b) => {
    if(a[1] === b[1]) return a[1] - b[1];
    return b[1] - a[1]
})
console.log(answer[0].join(" "));