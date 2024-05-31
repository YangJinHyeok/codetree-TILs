let fs = require("fs");
let input = fs.readFileSync(0).toString();
let answer = "";

function main(n){
    if(n === 0) return;
    answer += n + " ";
    main(n- 1);
    answer += n + " ";
}

main(Number(input));
console.log(answer);