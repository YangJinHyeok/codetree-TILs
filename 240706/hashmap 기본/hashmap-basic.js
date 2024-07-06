let fs = require("fs");
let input = fs.readFileSync(0).toString().split("\n");
let n = Number(input[0]);
let arr = input.slice(1).map((e) => e.split(" ")); 

let map = new Map();

for(let i = 0; i < arr.length; i++){
    let [str ,key , value] = arr[i];
    if(str === 'add'){
        map.set(key , value);
    }
    else if(str === 'find'){
        if(map.has(key)){
            let r = map.get(key);
            console.log(r);
        }
        else{
            console.log("None");
        }
    }
    else{
        map.delete(key);
    }
}