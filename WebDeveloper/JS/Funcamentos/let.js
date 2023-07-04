var numero = 1
{
    let numero = 2
    console.log(numero)
}
console.log(numero)




console.log('Depois')
for (let index = 0; index < 10; index++) {
    console.log(index)
}



const funcs = []
for (let i = 0; i < 10; i++) {
    funcs.push(function() {
        console.log(i)
    })
}
funcs[2]()
funcs[8]()
