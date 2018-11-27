using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace H_Task1
{
    class Program
    {
        static void Main(string[] args)
        {
            //init
            Console.WriteLine("n");
            int n = int.Parse(Console.ReadLine());
            Console.WriteLine("m");
            int m = int.Parse(Console.ReadLine());
            int[,] massiv = new int[n, m];
            Console.WriteLine("k");
            int k = int.Parse(Console.ReadLine());
            for (int o = 0; o < k; o++)
            {
                Console.WriteLine("t");
                int t = int.Parse(Console.ReadLine());
                Console.WriteLine("a");
                int i1 = int.Parse(Console.ReadLine());
                Console.WriteLine("b");
                int j1 = int.Parse(Console.ReadLine());
                massiv[i1, j1] = t;
                if (t==1)
                {
                    for (int i = 0 ; i < massiv.Length ; i++)
                    {
                        for (int j = 0; j < massiv.Length ; j++)
                        {
                            //if ()
                            //{

                            //}
                        }
                    }
                }

            }
        }
    }
}
