let fs = require("fs");

let input = fs.readFileSync(0).toString();

function main(n){
    if(n === 2) return 2;
    if(n === 1) return 1;
    return main(n - 2) + n;
}

let result = main(Number(input));
console.log(result);