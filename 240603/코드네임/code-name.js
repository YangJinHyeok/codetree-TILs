class Code {
    constructor(a , b){
        this.a = a;
        this.b = b;
    }
}

let fs = require("fs");
let input = fs.readFileSync(0).toString().split("\n");

let user= [];
for(let i = 0; i < input.length; i++){
    let [x , y] = input[i].split(" ");
    user.push(new Code(x , Number(y)));
}

let min_index = 0;
for(let i = 1; i < input.length; i++){
    if(user[min_index].b > user[i].b) min_index = i;
}

console.log(user[min_index].a , user[min_index].b)