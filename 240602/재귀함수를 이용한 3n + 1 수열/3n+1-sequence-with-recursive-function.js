const fs = require("fs");
let n = Number(fs.readFileSync(0).toString().trim());

// a가 3n + 1 수열을 총 몇번 반복해야 1이 되는지 반환합니다.
function countNumber(a) {
    if (a === 1) {
        return 0;
    }

    if (a % 2 === 0) {
        return countNumber(a / 2) + 1;
    } else {
        return countNumber(3 * a + 1) + 1;
    }
}

console.log(countNumber(n));