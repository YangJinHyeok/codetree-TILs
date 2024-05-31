let fs = require("fs");
let input = fs.readFileSync(0).toString();
let answer = "";

function main(c , n){
    if(c === 0) return;
    for(let i = n; i >= 1; i--) answer += i + " ";
    main(c- 1);
    for(let i = 1; i <= n; i++) answer += i + " ";
}

main(1, Number(input));
console.log(answer);