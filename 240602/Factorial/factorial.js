let fs = require("fs");

let input = fs.readFileSync(0).toString();

function main(n){
    if(n === 0) return 1;
    return main(n - 1) * n;
}

let result = main(Number(input));
console.log(result);