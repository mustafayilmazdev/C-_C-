using Miras;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace poli
{
    class Program
    {
        static void Main(string[] args)
        {
            Calisan c = new Calisan();
            c.bilgiVer();
            Console.WriteLine("");
            Mudur m = new Mudur();
            m.bilgiVer();
            Console.WriteLine("");
            Isci i = new Isci();
            i.bilgiVer();


            Console.ReadLine();
        }
    }
}
