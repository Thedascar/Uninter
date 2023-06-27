import math
class Calculadora:
    def __init__(self,numero1,numero2,op):
        self.numero1 = numero1
        self.numero2 = numero2
        self.op = op
    
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
        return f'O resto  de {self.numero1} e {self.numero2} foi : {self.numero1 % self.numero2}'
   
    def raiz_soma_dois(self):
        return f'A raiz da soma  de ({self.numero1} e {self.numero2}) foi : {math.sqrt(self.numero1 + self.numero2)}'
    
    def define_resultado(self):
        if self.op == '+':
            return self.soma()
        elif self.op == '-':
            return self.subtracao()
        elif self.op == '*':
            return self.multiplicacao()
        elif self.op == '/':
            return self.divisao()
        elif self.op == '**':
            return self.potencia()
        elif self.op == '%':
            return self.resto()
        elif self.op == 'sqrt':
            return self.raiz_soma_dois()
def menu():
    while(True):
        op = input('Escolha uma das opções: \n'
           '( + )Soma\n'
           '( - ) Subtração\n'
           '( - ) Multiplicação\n'
           '( / )Divisãon\n'
           '( ** )Potência\n'
           '( % )Resto\n'
           '( sqrt )Raiz\n'+
           'Digite a operação desejada: ')
        if not op in '+ - / * ** sqrt %':
            print('Valor não idêntificado')
            continue
        else:
            try:
                n1 = int(input('Digite o penultimo digito do seu RU: '))
                n2 = int(input('Digite o último digito do seu RU: '))
            except ValueError:
                print('Apenas número inteiros são válidos')
                continue
            calc = Calculadora(n1,n2,op)
            print(calc.define_resultado())
            continua = input('Digite qualque coisa para continuar ou digite "sair" para sair: ')
            if continua.lower() == 'sair':
                break
            else:
                continue
menu()

