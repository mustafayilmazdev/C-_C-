using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WindowsFormsApplication10
{
    class Kuyruk
    {
        public int max;
        public int bas, son;
        public int[] kuyrukDizi;

        public Kuyruk()
        {
            max = 5;
            bas = -1;
            son = -1;
            kuyrukDizi = new int[max - 1];
        }
        public void kuyrukEkle(int a)
        {
            if (son > 4)
            {
                Console.WriteLine("Kuyruk Dolu");               
            }
            else
            {
                if (bas == -1)
                {
                    bas += 1;
                }
                son++;
                kuyrukDizi[son] = a;
            }
        }
        public void kuyruktanSil()
        {
            if (bas == -1 || bas > son)
            {
                Console.WriteLine("Kuyruk Zaten bos");
            }
            else
            {
                bas++;
            }
        }

        public int printq()
        {
            int i;
            if (bas == -1 || bas > son)
            {
                Console.WriteLine("Amk senin gibi dilin");
            }
            else
            {
                for (i = son; i >= bas; i--)
                {
                    Console.WriteLine(kuyrukDizi[i]);
                }
            }

            return 0;

        }
    }
}
