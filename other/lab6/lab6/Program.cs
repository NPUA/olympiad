using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab6
{
    class Program
    {
        static void Main(string[] args)
        {

            var lib = new Library(4);

            lib.bk.Add(new Books());
            lib.bk.Add(new Books("bbb", "ccc"));
            lib.bk.Add(new Books("ccc", "ddd"));
            lib.bk.Add(new Books("ddd", "ehe"));


            foreach(var x in lib.bk)
            {
                Console.WriteLine(x);
            }


            var m = lib["fff"];
            foreach (var x in m)
            {
                Console.WriteLine(m);
            }

        }
    }

    public class Books
    {
        public string Author { set; get; }
        public string Title { set; get; }

        public Books(string at = "autor" , string tit = "title")
        {
            this.Author = at;
            this.Title = tit;
        }

        public override string ToString()
        {
            return this.Author + " " + this.Title;
        }
    }

    public class Library
    {
        public List<Books>  bk;
        public int Count { set; get; }

        public Library(int cnt)
        {
            this.Count = cnt;
            this.bk = new List<Books>(this.Count);
        }

        public Books this[int i]
        {
            set { bk[i] = value;}
            get { return bk[i]; }
        }

        public List<string> this[string at]
        {
            get
            {
                List<string> title = new List<string>();
                foreach (var x in this.bk)
                {
                    if (x.Author == at)
                    {
                        title.Add(x.Title);
                    }
                    if (title.Count != 0)
                    {
                        return title;
                    }
                }
                throw new Exception("Error");


            }
        }

    }


}
