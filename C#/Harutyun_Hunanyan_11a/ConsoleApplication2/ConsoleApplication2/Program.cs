using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
             List<int> nums = new List<int>();
            List<char> num_char = new List<char>();
            int n = 36956;
            string n_str = Convert.ToString(n);
            int p = 6;
            bool t = true;
            int i = 1,j=1, count = 0;

            for (i=0;i < n_str.Length; i++)
            {
                num_char[i] = n_str[i];
            }

            while (t == true)
            {
                if (i < 7)
                {
                    nums[i] = Convert.ToInt32(n_str[i]);
                }
                else if (7 < i ) { }
            }
            //Console.Write(count);
        }
    }
}
