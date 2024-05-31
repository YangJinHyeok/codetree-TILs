let fs = require("fs");
let input = fs.readFileSync(0).toString();

function test(n){
    if(n === 0) return 0;
    test(n - 1);
    console.log("HelloWorld");

}

test(input);