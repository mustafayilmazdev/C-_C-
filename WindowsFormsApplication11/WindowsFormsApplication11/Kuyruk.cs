using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WindowsFormsApplication11
{
    class Kuyruk
    {
        private int max;
        private double[] kuyrukdizi;
        private int elemansayi;
        private int bas, son;

        public Kuyruk(int i)
        {
            max = i;
            elemansayi = 0;
            bas = 0;
            son = -1;
            kuyrukdizi = new double[max];

        }

        public void kuyrukEkle(double i)
        {

            if (son == max - 1)
            {
                son = -1;

            }
            kuyrukdizi[++son] = i;
            elemansayi++;
        }
        public double KuyruktanSil()
        {
            double silinecek = kuyrukdizi[bas++];
            if (bas == max)
            {
                bas = 0;
            }
            elemansayi--;
            return silinecek;
        }
        public double ElemanAdet()
        {
            return elemansayi;

        }
        public double elemanDondur(int b)
        {
            return kuyrukdizi[bas + b];

        }
        public double diziElemanDondur(int a)
        {


            return kuyrukdizi[a];

        }
        public bool BosMu()
        {

            if (elemansayi == 0) return true;

            else return false;
        }
        public int maxDondur()
        {
            return max;
        }
        public int basDondur()
        {
            return bas;
        }
        public int sonDondur()
        {
            return son;
        }





    }
}
