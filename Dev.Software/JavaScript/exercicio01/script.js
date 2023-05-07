let botao = document.querySelector("#botao");
botao.style.background="blue";

let estaQuebrado=false;
let contaCliques=0;

// função lambda
botao.addEventListener("mouseover" ,e =>{   
    if(estaQuebrado===false){
        botao.style.background="green";
        botao.style.color="white";
    }
});

botao.addEventListener("mouseout" ,e =>{   
    if(estaQuebrado===false){
        botao.style.background="blue";
        botao.style.color="white";
    }
});

botao.addEventListener("click" ,e =>{   
    contaCliques ++;
    if(contaCliques >=10){
        botao.style.background="red";
        botao.innerHTML='QUEBREI';
        estaQuebrado=true;
        botao.style.color="black";
    }
    
});