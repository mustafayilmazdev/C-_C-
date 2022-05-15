using System; 

namespace Miras
{
    public class Calisan
    {
        public int asgari = 100;

        public virtual double maas() 
        {
            return asgari;
        }

        public void bilgiVer() 
        {
            Console.WriteLine("Çalışan maaşı: " + maas());
        }
    }
}
