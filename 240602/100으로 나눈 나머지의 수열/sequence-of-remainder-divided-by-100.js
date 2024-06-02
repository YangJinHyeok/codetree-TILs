let fs = require("fs");

let input = fs.readFileSync(0).toString();

function main(n){
    if(n === 1) return 2;
    if(n === 2) return 4;
    return (main(n - 1) * main(n - 2)) % 100
}

let result = main(Number(input));
console.log(result);