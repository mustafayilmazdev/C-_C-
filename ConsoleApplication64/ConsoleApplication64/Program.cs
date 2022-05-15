using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication64
{
    class Program



    {

       static bool dizisiralimi(int[] a)
        {
            for (int i = 0; i < a.Length - 1; i++)
            {
                if (a[i] > a[i+1])
                {
                    return false;
                }
            }

            return true;
        }
    

        static void Main(string[] args)
        {

            int[] d = new int[] { 0,1,2,3,5,9,12,30 };

            Console.WriteLine(dizisiralimi(d));


        }

      
    }
}
