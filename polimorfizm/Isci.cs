using System; 

namespace Miras
{
    public class Isci : Calisan
    {
        public override double maas()
        {
            return base.maas() * 2.5;
        }

        public void bilgiVer()
        {
            Console.WriteLine("İşçi maaş: " + maas());
        }
    }
}
