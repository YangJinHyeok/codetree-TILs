let fs = require("fs");
let input = fs.readFileSync("/dev/stdin").toString().split("\n");
let n = Number(input[0]);
dp = [];
dp[0] = 1;
dp[1] = 1;

for(let i = 2; i <= n; i++){
    dp[i] = dp[i - 1] + dp[i - 2];
}
console.log(dp[n - 1]);