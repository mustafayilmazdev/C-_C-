using System;

namespace Miras
{
    public class Program
    {
        static void Main(string[] args)
        {
            /*Tasit t = new Tasit();
            Console.WriteLine(t.marka);
            t.korna();

            Araba a = new Araba();
            Console.WriteLine(a.marka + " " + a.model);
            a.korna();*/

            Calisan c = new Calisan();
            c.bilgiVer();
            Console.WriteLine("sasa");
            Mudur m = new Mudur();
            m.bilgiVer();
            Console.WriteLine("");
            Isci i = new Isci();
            i.bilgiVer();


            Console.ReadLine();
        }
    } 
}
