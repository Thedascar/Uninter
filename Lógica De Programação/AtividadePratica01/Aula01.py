import math
class Calculadora:
    def __init__(self,numero1,numero2):
        self.numero1 = numero1
        self.numero2 = numero2
    
    
    def soma(self):
        return f'A soma foi de : {self.numero1 + self.numero2}'
    
    def subtracao(self):
        return f'A subtração foi de : {self.numero1 - self.numero2}'
    
    def multiplicacao(self):
        return f'A multiplicação foi de {self.numero1 * self.numero2}'
   
    def divisao(self):
        return f'A divisão doi de: {self.numero1 / self.numero2}'
    
    def potencia(self):
        return f'A potência foi de : {math.pow(self.numero1,self.numero2)}'
    
    def resto(self):
        return f'O resto foi de : {self.numero1 % self.numero2}'
   
    def raiz_soma_dois(self):
        return f'A raiz da soma foi de: {math.sqrt(self.numero1 + self.numero2)}'
    
        
def menu(a,b):
    calc = Calculadora(a,b)
    print(f'thes result is {calc.soma()}')
    print(f'thes result is {calc.subtracao()}')
    print(f'thes result is {calc.divisao()}')
    print(f'thes result is {calc.potencia()}')
    print(f'thes result is {calc.resto()}')
    print(f'thes result is {calc.raiz_soma_dois()}')
            
        
        
        
a = int(input("Digite o penultimo digito do seu RU: "))
b = int(input("Digite o último digito do seu RU: "))
menu(a,b)

        