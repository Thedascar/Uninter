let nome = "lucas"
let idade = 28
{
    console.log("Só dentro do escopo")
}
console.log(`My name is ${nome} and im ${idade}`)


let a = 10
let b = 10
let c = 100
console.log(a + b)

if(b > a && b > c){
    console.log('B é maior')
}else if(a > b && a > c){
    console.log('A é maior')
}else{
    console.log('C é maior')
}

for (let index = 0; index < 10; index++){
    console.log(index)
}

var num = 0
while (num <= 10) {
    console.log(`While ${num}`)
    num++
}
