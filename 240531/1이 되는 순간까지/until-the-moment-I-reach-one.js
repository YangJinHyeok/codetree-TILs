let fs = require("fs");
let input = fs.readFileSync(0).toString();
let answer = 0;

function main(n){
    if(n === 1) return answer;
    if(n % 2 === 0){
        answer++;
        return main(parseInt(n / 2));
    }
    else{
        answer++;
        return main(parseInt(n / 3));
    }
    
}

let result = main(Number(input));
console.log(result);