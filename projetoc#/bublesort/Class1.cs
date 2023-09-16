using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace bublesort
{
    public class Class1
    {

      public void bubleSort(int[] vector)
        {   
            
            for (int i = 0; i < vector.Length ; i++)
            {
                for (int j = 0; j < (vector.Length - 1); j++)
                {
                    if (vector[j] > vector[j + 1])
                    {
                        int aux = vector[j];
                        vector[j] = vector[j + 1];
                        vector[j + 1] = aux;
                    }
                }
            }
            foreach (var item in vector)
            {
                Console.WriteLine(item);
            }
        }
    }
}
