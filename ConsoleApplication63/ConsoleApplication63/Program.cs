using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication63
{
    class Program
    {
        static void Main(string[] args)
        {
            string no = Console.ReadLine();
            int[] sy = new int[9];
            int sn = 0,fk = 0;
            for (int p = 0; p <= 8;p++) {

                sy[p] = Convert.ToInt32(no[p]);
                if (sy[p] - 48 <= 2)
                {
                    sy[p] = 1;

                }
                else if (sy[p] - 48 <= 3)
                {
                    sy[p] = 2;

                }
                else if (sy[p] - 48 <= 4)
                {
                    sy[p] = 3;

                }
               else if (sy[p] - 48 <= 5)
                {
                    sy[p] = 0;

                }
                else if (sy[p] - 48 <= 6)
                {
                    sy[p] = 5;

                }
                else if (sy[p] - 48 <= 8)
                {
                    sy[p] = 4;

                }
                else
                {
                    sy[p] = 3;
                }
                sn += sy[p];
                Console.WriteLine(sy[p]);

            }
            for(int k = 1; k < sn; k++)
            {
                fk += k;
                Console.WriteLine(" ");
                Console.WriteLine(sn + "" + fk);
                Console.ReadKey(true);
            }
        }
    }
}
