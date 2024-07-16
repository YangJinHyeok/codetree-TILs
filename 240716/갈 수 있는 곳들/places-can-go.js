class Queue{
    constructor(){
        this.queue = [];
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
        this.queue.push(item);
        this.tail++;
    }
    pop(){
        if(this.empty()) console.log(0);
        return this.queue[++this.head];
    }
}

let fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let [n , m] = input[0].split(" ").map(Number);
let arr = input.slice(1 , n + 1).map((e) => e.split(" ").map(Number));
 let visited = Array.from({length : n} , ()=>new Array(n).fill(false));
let startPoint = input.slice(n + 1).map((e) => e.split(" ").map(Number));
let queue = new Queue();
let answer = 1;


let dx = [1 , -1 , 0 , 0];
let dy = [0 , 0 , 1 , -1];

function inRange(x , y){
    return 0 <= x && x < n && 0 <= y && y < n;
}

function canGo(x , y){
    if(!inRange(x , y)) return false;
    if(visited[x][y] || arr[x][y] === 1) return false;
    return true;
}


function bfs(){
    while(queue.size() > 0){
        let [x , y] = queue.pop();
        for(let i = 0; i < 4; i++){
            let nx = x + dx[i];
            let ny = y + dy[i];
            if(canGo(nx , ny)){
                queue.push([nx , ny]);
                visited[nx][ny] = true;
                answer++;
            }
        }
    }
}


for(let i = 0; i < m; i++){
    let [a , b] = startPoint[i];
    queue.push([a , b]);
    visited[a][b] = true;
}
bfs();

console.log(answer);