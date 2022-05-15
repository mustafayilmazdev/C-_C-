using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Miras
{
    public class Mudur : Calisan
    {
        public override double maas()
        {
            return base.maas() * 5;
        }

        public void bilgiVer() 
        {
            Console.WriteLine("Müdür maaş: " + maas());
        }
    }
}
