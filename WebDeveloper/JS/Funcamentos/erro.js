function erro(erro){
    throw new Error('aaaaaaaa')
}

function nome(obj){
    try{
    console.log(obj.name.toUpperCase() + '!!!!!')
    }catch(e){
        erro(e)
    } finally{
        console.log('não deu')
    }
    
}

const obj = {nome: 'Roberto'}
nome(obj)

