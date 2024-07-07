const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split("\n");

const [n, k] = input[0].split(' ').map(Number);
const arr = input[1].split(' ').map(Number);

const freq = new Map();
let ans = 0;

// 각 숫자가 몇 번씩 나왔는지를
// hashmap에 기록해줍니다.
arr.forEach(elem => {
    if (freq.has(elem))
        freq.set(elem, freq.get(elem) + 1);
    else
        freq.set(elem, 1);
})

for(let i = 0; i < n; i++){
    if(freq.has(arr[i])){
         freq.set(arr[i], freq.get(arr[i]) - 1);
    }
    for(let j = 0; j < i; j++){
        if(freq.has(k - arr[i] - arr[j])){
            ans += freq.get(k - arr[i] - arr[j]);
        }
    }
}

console.log(ans);