using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication15
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int[] a = new int[5];
        int b = 0;
        int c = 5;
        private void button1_Click(object sender, EventArgs e)
        {
           a[b] = Convert.ToInt32(textBox1.Text);
            listBox1.Items.Add(a[b]);
            b++;
            label3.Text =Convert.ToString( --c);
            if (c == 0)
            {
                button1.Enabled = false;
                button2.Enabled = true;
            }
            textBox1.Clear();
            textBox1.Focus();

        }

        private void button2_Click(object sender, EventArgs e)
        {

            bubbleSort(a, 5);


            listBox1.Items.Clear();
            for (int i = 0; i < 5; i++)
            {
                listBox1.Items.Add(a[i]);

            }


        }

        void bubbleSort(int[] dizi, int n)
        {
            
            if (n == 1)
                return;
        
            for (int i = 0; i < n - 1; i++)
                if (dizi[i] > dizi[i + 1])
                {
                    int gecici;
                    gecici = dizi[i];
                    dizi[i] = dizi[i + 1];
                    dizi[i + 1] = gecici;
                }                  
            
            bubbleSort(dizi, n - 1);
        }
    }

}
