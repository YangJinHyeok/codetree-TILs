const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split("\n");

// 변수 선언 및 입력:
const [n, k] = input[0].split(' ').map(Number);
const arr = input[1].split(' ').map(Number);

const count = new Map();
let ans = 0;

arr.forEach(elem => {
    const diff = k - elem;

    if (count.has(diff))
        ans += count.get(diff);

    if (count.has(elem))
        count.set(elem, count.get(elem) + 1);
    else
        count.set(elem, 1);
})

console.log(ans);