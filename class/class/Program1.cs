//using System;

//namespace Lab5
//{
//    public class Program
//    {
//        static void Main(string[] args)
//        {
//            /*Console.WriteLine("-----------------"); 
//            Sporcu sp = new Sporcu();
//            sp.ad = "Kobe Bryant";
//            sp.numara = 24;
//            sp.takim = "Lakers";
//            Console.WriteLine(sp.bilgiVer()); 
//            Console.WriteLine("-----------------");*/

//            Sporcu sp2 = new Sporcu();
//            sp2.ad = "Messi";
//            sp2.numara = 10;
//            sp2.takim = "FCB";

//            // transfer

//            sp2.takimDegistir("PSG");
//            sp2.numaraDegistir(30);

//            Console.WriteLine(sp2.bilgiVer());


//            Console.ReadLine();
//        }
//    }

//    public class Sporcu 
//    {
//        // Field (Alan)
//        public string ad;
//        public int numara;
//        public string takim;

//        public string bilgiVer() 
//        {
//            return ad + " - " + numara.ToString() + " - " + takim;
//        }

//        public void takimDegistir(string yeniTakim) 
//        {
//            takim = yeniTakim;
//        }

//        public void numaraDegistir(int yeniNumara)
//        {
//            numara = yeniNumara;
//        }

//    }
//}
