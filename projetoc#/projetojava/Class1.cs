using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aula01
{
    public class Pessoa : INterface1
    {
        

        private string nome;

        public string Nome { get => nome; set => nome = value; }

        public void Falar()
        {
            Console.WriteLine("Sou Pessoa");
        }
    }
}
