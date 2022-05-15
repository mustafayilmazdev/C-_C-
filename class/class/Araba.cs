using System;

namespace Lab5
{
    public class Araba
    {
        public string marka;
        public int koltukSayisi;

        public void koltukSayisiGoster() 
        {
            Console.WriteLine("Arabanın 5 koltuğu vardır.");
        }

        public void markaGoster(string marka) 
        {
            Console.WriteLine("Arabanın markası: " + marka);
        }
    }
}
