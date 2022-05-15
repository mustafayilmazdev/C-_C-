using System; 

namespace Miras
{
    public class Araba : Tasit
    {
        public string model = "Mustang";

        public override void korna() 
        {
            Console.WriteLine("bip bip");
        }
    }
}
