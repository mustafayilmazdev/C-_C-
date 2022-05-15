using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DersIII
{
    class Kuyruk
    {
        private int max; // Kuyruk için max değer
        private double[] kuyrukdizi; //elemanları saklayacak dizi
        private int elemansayi; // kuyruktaki eleman sayısı
        private int bas, son; // ilk elemanın ve son elemanın sırası

        public Kuyruk(int i)
        {
            max = i; //Kullanıcıdan gelen değeri kapasite olarak belirle
            elemansayi = 0; //mevcut eleman sayısı
            bas = 0; //ilk elemanın dizideki sırası
            son = -1; //eklenmediğinde -1 kalacak
            kuyrukdizi = new double[max]; // belirlenen kapasite kadar
        }

        public void KuyrukEkle(double i)
        {
            if (son == max - 1) //max değer kontrolü
                son = -1;
            kuyrukdizi[++son] = i;  // son++; kuyrukdizi[son]=i;
            elemansayi++; //Yeni eleman eklendi sayıyı 1 arttır           
        }

        public double KuyruktanSil()
        {
            double silinecek = kuyrukdizi[bas++]; //ilk değeri al, bas değeri bir sonrakine aktar
            if (bas == max)
                bas = 0;
            elemansayi--;
            return silinecek;

        }

        public double ElemanAdet()
        {
            return elemansayi;
        }

        public bool BosMu()
        {
            if (elemansayi == 0) return true; //boş
            else return false; // boş değil
        }


    }
}
