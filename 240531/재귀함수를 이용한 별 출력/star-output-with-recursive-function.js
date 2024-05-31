let fs = require("fs");
let input = fs.readFileSync(0).toString();

function main(n){
    if(n === 0) return;
    main(n - 1);
    console.log("*".repeat(n));

}

main(Number(input));