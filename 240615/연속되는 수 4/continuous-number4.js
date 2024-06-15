const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split('\n');

// 변수 선언 및 입력
const n = Number(input[0]);
const arr = input.slice(1, 1 + n).map(Number);

let ans = 0;
let cnt = 0;
for(let i = 0; i < n; i++){
    if(i >= 1 && arr[i] > arr[i - 1]){
        cnt++;
    }
    else cnt = 1;
    ans = Math.max(ans , cnt);
}
console.log(ans);