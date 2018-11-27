using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace M_Task2
{
    class Program
    {
        public static List<int> tvanshanner;
        public static List<int> tvanshanner2;
        public static List<int> tvanshanner3;
        static void Main(string[] args)
        {
            tvanshanner = new List<int>();
            tvanshanner2 = new List<int>();
            tvanshanner3 = new List<int>();//chisht dasavorutyun

            Console.WriteLine("nermucel tiv - 1 < tiv < 10 000 000");
            int N = Int32.Parse(Console.ReadLine());
            Console.WriteLine("nermucel tiv");
            int P = Int32.Parse(Console.ReadLine());

            for (int i = 0; i < 7; i++)
            {
                tvanshanner.Add((int)(N % (Math.Pow(10, (i + 1)))));
                if (i != 0)
                    f1(tvanshanner[i], i);
                else
                    tvanshanner2.Add(tvanshanner[i]);
                

            }
            f2();
            tvanshanner2 = tvanshanner3;
            tvanshanner2.Sort();
            Console.WriteLine("-------");
            foreach (int a in tvanshanner2)
            {
                Console.WriteLine(a);
            }

            Console.Read();
        }
        static void f1(int tiv, int count)
        {
            int sum = 0;
            for (int i = 0; i < count; i++)
            {
                sum = tvanshanner[i];
            }

            tvanshanner2.Add((int)((tiv - sum) / Math.Pow(10, count)));
        }

        static void f2()
        {
            bool tt = false;
            for (int i = 0; i < tvanshanner2.Count; i++)
            {
                if (tvanshanner2[tvanshanner2.Count - 1 - i] == 0 && !tt)
                {
                    continue;
                }
                else
                    tt = true;

                tvanshanner3.Add(tvanshanner2[tvanshanner2.Count - 1 - i]);
                
            }
            foreach (int a in tvanshanner3)
            {
                Console.WriteLine(a);
            }
        }
    }
}
