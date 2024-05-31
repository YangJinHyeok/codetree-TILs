let fs = require("fs");
let input = fs.readFileSync(0).toString();

function test(c , n){
    if(c === 0) return;
    let str1 = "";
    for(let i = 1; i <= n; i++){
        str1 += i + " ";
    }
    console.log(str1);
    test(c - 1);
    let str2 = "";
    for(let i = n; i >= 1; i--){
        str2 += i + " ";
    }
    console.log(str2);
}

test(1 , Number(input));