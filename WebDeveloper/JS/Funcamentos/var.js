var sinal = 'nao sera'
{{
   {
    {
        var sinal = 'sera'
        console.log(sinal)
    }
   }    
}}
console.log(sinal)

function teste(){
    var local  = 123
    console.log(local)

}
teste()


for (var index = 0; index < 11; index++) {
    console.log(index)
}



const funcs = []
for (var i = 0; i < 10; i++) {
    funcs.push(function() {
        console.log(i)
    })
}
funcs[2]()
funcs[8]()











