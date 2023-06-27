import math
class Calculadora:
    def __init__(self,numero1,numero2):
        self.numero1 = numero1
        self.numero2 = numero2
    
    
    def soma(self):
        return f'A soma de {self.numero1} e {self.numero2} foi : {self.numero1 + self.numero2}'
    
    def subtracao(self):
        return f'A subtração de {self.numero1} e {self.numero2} foi : {self.numero1 - self.numero2}'
    
    def multiplicacao(self):
        return f'A multiplicação de {self.numero1} e {self.numero2} foi : {self.numero1 * self.numero2}'
   
    def divisao(self):
        return f'A divisão de {self.numero1} e {self.numero2} foi : {self.numero1 / self.numero2}'
    
    def potencia(self):
        return f'A potência de ({self.numero1} e {self.numero2}) foi : {math.pow(self.numero1,self.numero2)}'
    
    def resto(self):
        return f'O resto  de {self.numero1} + {self.numero2} foi : {self.numero1 % self.numero2}'
   
    def raiz_soma_dois(self):
        return f'A raiz da soma  de ({self.numero1} + {self.numero2}) foi : {math.sqrt(self.numero1 + self.numero2)}'
    
        
def menu(op,a,b):
    while(True):
        
        calc = Calculadora(a,b)
        print(f'{op}')
        print(calc.soma())
        print(calc.subtracao())
        print(calc.divisao())
        print(calc.subtracao())
        print(calc.potencia())
        print(calc.resto())
        print(calc.raiz_soma_dois())
        return
                
        
        
op = input('Escolha uma das opções: '
           '( + )Soma\n'
           '( - ) Subtração\n'
           '( / )Divisãon\n'
           '( ** )Potência\n'
           '( % )Resto\n'
           '( sqrt )Raiz\n'
           'Digite a operação desejada: ')
if not op in '+ - / * ** sqrt %':
    print('Erro')
else:
    n1 = int(input("Digite o penultimo digito do seu RU: "))
    n2 = int(input("Digite o último digito do seu RU: "))
    menu(op,n1,n2)

