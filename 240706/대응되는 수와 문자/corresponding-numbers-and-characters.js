const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split("\n");

// 변수 선언 및 입력:
const [n, m] = input[0].split(' ').map(Number);

const words = [0].concat(input.slice(1, 1 + n));
const keys = input.slice(1 + n, 1 + n + m);

const stringToNum = new Map();

words.forEach((word, i) => {
    stringToNum.set(word, i);
});

keys.forEach(key => {
    if ('0' <= key[0] && key[0] <= '9')
        console.log(words[Number(key)]);
    else
        console.log(stringToNum.get(key));
})