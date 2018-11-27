using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HTask2
{
    class Program
    {


        static void Main(string[] args)
        {
            int answer = -1;
            string part1, part2 = "";
            Console.WriteLine("Write N");
            string n = Console.ReadLine();
            Console.WriteLine("Write P");
            int p = int.Parse(Console.ReadLine());
            bool finish = false;

            for (int i = n.Length; i >= 0; i--)
            {

                part1 = n.Substring(0, i);
                if (i != n.Length)
                {
                    part2 = n.Substring(i + 1);

                }
                answer = int.Parse(part1 + part2);
                if (answer % p == 0)
                {
                    finish = true;
                    break;
                }
            }

            if (finish)
            {
                Console.WriteLine(answer);
            }
            else
            {
                for (int i = 0; i < n.Length; i++)
                {
                    answer = int.Parse(n[i].ToString());
                    if (answer % p == 0)
                    {
                        finish = true;

                        break;
                    }
                }
                if (!finish)
                {
                    answer = -1;
                }
                Console.WriteLine(answer);
            }
            Console.ReadLine();
        }
    }
}
