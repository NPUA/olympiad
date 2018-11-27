using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Task2
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int p=int.Parse(Console.ReadLine());
            if (n % p == 0)
                Console.Clear();
                Console.WriteLine(n);
            int num = n;
            List<int> alldigits = new List<int>();
            while (num > 0)
            {
                alldigits.Add(num % 10);
                num = num / 10;
            }
            int num2 = n;
            int num3=0;
            
            while (num3%p!=0)
            {
                int c = alldigits.Count - 1;
                int b = alldigits[alldigits.Count - 1];
                alldigits.RemoveAt(alldigits.Count - 1);
                foreach (int a in alldigits)
                {
                    num3 = num3 * 10 + a;
                }
               
                if (num3 % p == 0)
                {
                    break;
                }
                else 
                {
                    alldigits.Insert(c, b);
                }


            }
            if(num3%p==0)
                Console.WriteLine(num3);
            else
                Console.WriteLine(-1);
            Console.ReadKey();
        }
    }
}
