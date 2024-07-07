const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split('\n');

// 변수 선언 및 입력
const n = Number(input[0]);
const words = input.slice(1, 1 + n);
const count = new Map();

words.forEach(word => {
    const sortedWord = word.split('').sort().join('');

    if (count.has(sortedWord))
        count.set(sortedWord, count.get(sortedWord) + 1);
    else
        count.set(sortedWord, 1);
})

let ans = 0;
for (let [key, value] of count) {
   ans = Math.max(ans , value);
}

console.log(ans);