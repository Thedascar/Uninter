// para objeto
const pessoa = {
    nome: 'Lucas',
    idade: 28,
    endereco: {
        rua: 'a',
        numero: 78
    }
}

const { nome,idade } = pessoa
console.log(nome,idade)

// para arrya
const [a] = [10]
console.log(a)

// para funcao

function rand({min = 0,max = 1000}){
    const valor = Math.random() * (max-min) + min
    return Math.floor(valor)
}

const obj = {max: 50, min: 40}
console.log(rand(obj))
console.log(rand({min: 955}))

// array
function rand2([min=0,max=1000]){
    if(min > max) [min,max] = [max,min]
    const valor2 = Math.random() * (max-min) + min
    return Math.floor(valor2)
}


console.log(rand2([50,40]))
console.log(rand2([950]))
console.log(rand2([,5]))
console.log(rand2([]))


