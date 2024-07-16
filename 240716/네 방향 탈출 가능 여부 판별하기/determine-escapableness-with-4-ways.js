class Queue {
    constructor() {  // 빈 큐 하나를 생성합니다.
        this.q = [];
        this.head = -1; // head는 큐의 가장 첫 원소의 위치 바로 앞을 가리킵니다.
        this.tail = -1; // tail은 큐의 가장 마지막 원소의 위치를 가리킵니다.
    }

    push(item) {  // 큐의 맨 뒤에 데이터를 추가합니다.
        this.q.push(item);
        this.tail++;
    }

    empty() {  // 큐가 비어있으면 true를 반환합니다.
        return (this.head === this.tail);
    }

    size() {  // 큐에 들어있는 데이터 수를 반환합니다.
        return (this.tail - this.head);
    }

    pop() {  // 큐의 맨 앞에 있는 데이터를 반환하고 제거합니다.
        if (this.empty()) {
            throw new Error("Queue is empty");
        }
        return this.q[++this.head];
    }

    front() {  // 큐의 맨 앞에 있는 데이터를 제거하지 않고 반환합니다.
        if (this.empty()) {
            throw new Error("Queue is empty");
        }
        return this.q[this.head + 1];
    }
}

let fs =  require("fs");
let input = fs.readFileSync(0).toString().split('\n');
let [n , m] = input[0].split(" ").map(Number);
const queue = new Queue();
let grid = input.slice(1).map((e) => e.split(" ").map(Number));
let visited = Array.from({length : n} , () => new Array(m).fill(false));
let flag = false;


let dx = [1 , -1 , 0 , 0];
let dy = [0 , 0 , 1 , -1];

function inRange(x , y){
    return 0 <= x && x < n && 0 <= y && y < m;
}

function canGo(x , y){
    if(!inRange(x , y)) return false;
    if(visited[x][y]|| grid[x][y] === 0) return false;
    return true;
}
function bfs(){

    while(queue.size() > 0){
        let [x , y] = queue.pop();
        if(x === n - 1 && y === m - 1){
            flag = true;
            break;
        }
        for(let i = 0; i < 4; i++){
            let nx = x + dx[i];
            let ny = y + dy[i];
            if(canGo(nx , ny)){
                queue.push([nx , ny]);
                visited[nx][ny] = true;
            }
        }
    }
}


queue.push([0 , 0]);
visited[0][0] = true;
bfs();

if(flag) console.log(1);
else console.log(0);