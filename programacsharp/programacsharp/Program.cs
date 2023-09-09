using programacsharp;

String nome = "Lucas";
int idade = 28;
bool ativo = true;

Console.WriteLine($"Hy my name is {nome} and ive {idade} years old" +
    $"and {ativo}");

Class1 a = new Class1();

Console.WriteLine(a.ToString());


object obj1 = new object();
var obj2 = new object();

var obj3 = obj2;

Console.WriteLine("Comparando objs");
Console.WriteLine($"{obj1.GetType().Name}| {obj2.GetType().Name}| {obj3.GetType().Name}");
Console.WriteLine(obj2==obj3);
Console.WriteLine(obj2 == obj1);
