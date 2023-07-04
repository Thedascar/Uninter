console.log(typeof Object)

class Produto {}
console.log(typeof Produto)


function imprimirSoma(a,b){
    return a + b
}

console.log(imprimirSoma(5,5))


function soma(a,b = 1){
    return a + b
}

console.log(soma(5))


let imprimiSub = function(a,b){
    return a - b 
}

imprimiSub(5,3)



let sub = (a,b) =>{
    return a - b
}


console.log(sub(5,3))


let mult = (a,b) => a - b

console.log(mult(5,2))
