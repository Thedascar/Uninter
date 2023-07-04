let prod1 = {}
prod1.nome = 'Cel Samsung'
prod1.valor = 3999.00
prod1['desconto'] = 0.40
console.log(prod1)


// obejeto 2

let prod2 = {
    nome: 'S21 fe',
    preco: 1999.00
}

console.log(typeof Object)
console.log(typeof new Object)



function Obj(nome){
    this.nome = nome
    return nome;
}

console.log(Obj('Lucas'))


const obj2 = new Obj('LA ele')

console.log(obj2)