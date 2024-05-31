let fs = require("fs");
let input = fs.readFileSync(0).toString();

function main(n){
    if(n < 10) return n**2;
    return main(Math.floor(n / 10)) + (n % 10)**2;
}

let result = main(Number(input));
console.log(result);