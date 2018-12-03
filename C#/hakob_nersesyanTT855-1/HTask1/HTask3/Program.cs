using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HTask3
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] n = new int[int.Parse(Console.ReadLine())];
            int l=0, s=0,k=0;
            for (int i = 0; i < n.Length; i++)
            {
                n[i] = i + 1;
            }
            for (int i = 1; i < n.Length; i++)
            {
                s = n[i] - 1;
                k++;
                for (int j = i; j < n.Length; j++)
                {                                                
                    n[j] -= s;
               }
               
            }
    
            Console.WriteLine(k);
        }
    }
}
