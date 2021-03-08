let arr =[10,3,5,6,2]

let newArr=[]
let m = arr.reduce((a,b)=>{return a*b},1);
arr.forEach((e)=>{

  newArr.push (  Math.round(Math.exp(Math.log(m) - Math.log(e))) );
})

console.log(newArr)
