using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication24
{
    public partial class Form1 : Form
    {
        int[] dizik = new int[13];
        int topla1=0,topla2=0,topla3=0;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            for (int i = 0; i < dizik.Count(); i++)
            {
                if (i == 3)
                {
                    dizik[i] = 1;
                }
                else
                {
                    dizik[i] = 12;
                }
            }
            listele();
            deneme(dizik);
           

        }

        void deneme(int [] dizi)
        {
            int a;
            int kalan = dizi.Count() % 3;

            if (dizi.Count() == 1)
            {
                MessageBox.Show("0"+dizi[0].ToString());
            }

            else if (dizi.Count()==2) {

                if (dizi[0] < dizi[1])
                {
                    MessageBox.Show("1"+dizi[0].ToString());
                }
                else
                {
                    MessageBox.Show("2"+dizi[1].ToString());
                }
            }
            else { 
            if (kalan != 0)
            {
                a = Convert.ToInt32( dizi.Count()) - kalan;
              //  MessageBox.Show(a.ToString());
            }
            else
            {
                a = dizi.Count();
               //   MessageBox.Show(a.ToString());
            }


            for (int i = 0; i <(a/3)* 2; i++)
                {
                    if (i < (a / 3))
                    {
                        topla1 += dizi[i];
                    }
                    else
                    {
                        topla2 += dizi[i];
                    }
                }
            if (topla1 == topla2)
            {
                topla2 = 0;
                for(int i = a / 3; i < a; i++)
                {

                    if (i < (a / 3)*2 )
                    {
                        topla2 += dizi[i];
                    }
                    else
                    {
                        topla3 += dizi[i];
                    }
                }





                    if (topla2 == topla3)
                    {
                        if (kalan == 1)
                        {
                            MessageBox.Show("3"+dizi.Count().ToString());
                            MessageBox.Show("Sahte para: " + dizi[dizi.Count() - 1].ToString());
                        }
                        else
                        {

                            if (dizi[dizi.Count() - 1] < dizi[dizi.Count() - 2])
                            {
                                MessageBox.Show("4"+dizi[dizi.Count() - 1].ToString());
                            }
                            else
                            {
                                MessageBox.Show("5"+dizi[dizi.Count() - 2].ToString());
                            }
                        }
                    }


                }



                else if (topla1 < topla2)
                {
                    int[] d1 = new int[dizi.Count()/3];
                    for (int i = 0; i < dizi.Count()/3; i++)
                    {
                        d1[i] = dizi[i];
                    }

                    deneme(d1);
                }
                
                else if(topla1 < topla2)
                {
                    int[] d1 = new int[dizi.Count() / 3];
                    for (int i = dizi.Count()/3; i <( dizi.Count() / 3)*2; i++)
                    {
                        d1[i] = dizi[i];
                    }

                    deneme(d1);
                }
               
           

        }
        }































        void listele()
        {
            for (int i = 0; i < dizik.Count(); i++)
            {
                listBox1.Items.Add(Convert.ToString(dizik[i]));
            }

        }
    }
}
