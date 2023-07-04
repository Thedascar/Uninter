let peso1 = 1.0
let peso2 = Number('2.0')

console.log(peso1,peso2)
console.log(Number.isInteger(peso1))
console.log(Number.isInteger(peso2))

let avaliacao = 9.887
let avaliacao2 = 7.845

let total = avaliacao * peso1 + avaliacao2 * peso2

let media = total / (peso1 + peso2)

console.log(media.toFixed(2))
console.log(media.toString(2))
