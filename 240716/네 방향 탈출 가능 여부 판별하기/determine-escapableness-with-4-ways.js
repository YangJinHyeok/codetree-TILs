let fs =  require("fs");
let input = fs.readFileSync(0).toString().split('\n');
let [n , m] = input[0].split(" ").map(Number);
let grid = input.slice(1).map((e) => e.split(" ").map(Number));
let queue = [];
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

    while(queue.length > 0){
        let [x , y] = queue.shift();
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