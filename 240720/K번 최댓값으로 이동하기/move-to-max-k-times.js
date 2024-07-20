class Queue{
    constructor(){
        this.q = [];
        this.head = -1;
        this.tail = -1;
    }
    empty(){
        return this.head === this.tail;
    }
    size(){
        return this.tail - this.head;
    }
    push(item){
        this.q.push(item);
        this.tail++;
    }
    pop(){
        if(this.empty()) console.log("empty");
        return this.q[++this.head];
    }
}

let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
const NOT_EXISTS = [-1, -1];
const [n , k] = input[0].split(" ").map(Number);
const grid = input.slice(1, 1 + n).map(line => line.split(' ').map(Number));
// 현재 위치
let [r, c] = input[1 + n].split(' ').map(Number);
let currCell = [r - 1 , c - 1];

const queue = new Queue();
let visited = Array.from(Array(n), () => Array(n).fill(0));

function inRange(x, y){
    return 0 <= x && x < n && 0 <= y && y < n;
}

function canGo(x , y , targetNum){
    return inRange(x , y) && !visited[x][y] && grid[x][y] < targetNum;
}

function initializeVisited(){
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n; j++) {
            visited[i][j] = false;
        }
    }
}

function bfs(){
    const dx = [0, 1, 0, -1], dy = [1, 0, -1, 0];

    let [curX , curY] = currCell;
    queue.push(currCell);
    visited[curX][curY] = true;
    const targetNum = grid[curX][curY];

    while(!queue.empty()){
        [curX , curY] = queue.pop();

        for(let i = 0; i < 4; i++){
            let nx = curX + dx[i];
            let ny = curY + dy[i];
            
            if(canGo(nx , ny , targetNum)){
                queue.push([nx , ny]);
                visited[nx][ny] = true;
            }
        }
    }
}

function needUpdate(bestPos , newPos){
    if(bestPos[0] === NOT_EXISTS[0] && bestPos[1] === NOT_EXISTS[1]) return true;

    const [bestX , bestY] = bestPos;
    const [newX , newY] = newPos;

    if(grid[bestX][bestY] !== grid[newX][newY]){
        return grid[newX][newY] > grid[bestX][bestY];
    }
    if(-newX != -bestX) return -newX > -bestX;
    return -newY > -bestY;        
}

function move(){
    initializeVisited();
    bfs();

    let bestPos = NOT_EXISTS;
    for(let i = 0; i < n; i++){
        for(let j = 0; j < n; j++){
            if(!visited[i][j] || i === currCell[0] && j === currCell[1]) continue;
            const newPos = [i , j];
            if(needUpdate(bestPos , newPos)){
                bestPos = newPos;
            }
        }
    }
    // 만약 움직일 위치가 없다면 종료합니다.
    if (bestPos[0] === NOT_EXISTS[0] && bestPos[1] === NOT_EXISTS[1]) {
        return false;
    } 
    // 움직일 위치가 있다면 이동합니다.
    else {
        currCell = bestPos;
        return true;
    }

}


// k번에 걸쳐 움직이는 것을 반복합니다.
for (let i = 0; i < k; i++) {
    const isMoved = move();

    // 움직이지 못했다면 바로 종료합니다.
    if(!isMoved) break;
}


const [finalX, finalY] = currCell;
console.log(finalX + 1, finalY + 1);