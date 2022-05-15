using System; 

namespace Lab5
{
    public class Ucak
    {
        public string seferSayisi;

        public Ucak()  // default Yapıcı method - constructor
        {
            seferSayisi = "TK-201";
        }
        public Ucak(string yeniSefer) // yapıcı method
        {
            seferSayisi = yeniSefer;
        }

        public void bilgiVer() 
        {
            Console.WriteLine("Uçak: Boing 737 + Sefer sayısı: " + seferSayisi);
        }
    }
}
