let fs = require("fs");
let input = fs.readFileSync(0).toString().split("\n");
let n = Number(input[0]);

class User{
    constructor(name , height , weight){
        this.name = name;
        this.height = height;
        this.weight = weight;
    }
}
let users = [];
for(let i = 1; i <= n; i++){
    let [name , height , weight] = input[i].split(" ");
    users.push(new User(name , Number(height) , Number(weight)));
}
users.sort((a , b) => a.height - b.height);
for(let s of users){
    console.log(`${s.name} ${s.height} ${s.weight}`)
}