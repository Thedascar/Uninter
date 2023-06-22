let a = [1,2,3,4,5,6,7,8,9]
a.forEach(element => {
    console.log(element)
});


let carro = {
    modelo: 'Fusca',
    velocidade: 150
}
console.log(carro.modelo)
console.log(carro.velocidade)

let livro = new Object()
livro.titulo = 'novo livro'
livro.paginas = 1000

console.log(livro.titulo)
livro.titulo = 'segundo livro'
console.log(livro.titulo)


let pote = {
    cor: 'cor',
    tamanho: 0
}
pote.cor = 'azul'
pote.tamanho = 10
console.log(pote.cor)
console.log(pote.tamanho)


function Piso(){
    this.cor = 'cor'
}

const piso = new Piso();
piso.cor = 'vermelho'

console.log(piso.cor)


function Notebook(marca,preco){
    this.marca = marca
    this.preco = preco
}

const note = new Notebook('Samsung',2400)
const note2 = new Notebook('Mac',9400)

console.log(note.marca)
console.log(note2.marca)

let dog={
    name: 'dog',
    idade: 5,
    raca: 'dog de dog'
}

for (const a in dog) {
    console.log(dog[a])
}

let z = [10,20,30]
var s = 0
for (var i of z) {
    console.log(i)
    
}

function ola(){
    console.log('ola mundo')
}

ola()


function soma(a,b){
    return a + b
}

console.log(soma(3,3))


let menos = (n1,n2) =>n1 - n2;
console.log(menos(5,3))