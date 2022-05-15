using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WindowsFormsApplication12
{
    class Yigin
    {
        public int max;
        public double[] yiginDizi;
        public int elemansayi;
        public int bas, son;

        public Yigin(int i)
        {
            max = i;
            elemansayi = 0;
            bas = 0;
            son = -1;
            yiginDizi = new double[max];
        }
        public void yiginEkle(double i)
        {
            if (son < max)
            {
                yiginDizi[++son] = i;
                elemansayi++;

            }
            else
            {
                son = max-1;
            }
            
        }
        public double yigindanSil()
        {
            double silinecek = yiginDizi[son];
            if (bas == max)
            {
                bas = 0;
            }
            elemansayi--;
            return silinecek;            
        }
        public double elemanAdet()
        {
            return elemansayi;

        }
        public double elemanDondur(int b)
        {
            return yiginDizi[bas+b];
            
        }
     


    }
}
