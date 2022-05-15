using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication6
{
    public partial class Form1 : Form
    {

        Kuyruk ilk = new Kuyruk(3);
        int b = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double x = double.Parse(textBox1.Text);
       //     listBox1.Items.Add("Burasi dizi indis takip alani");
          //  listBox1.Items.Add(ilk.basDondur());
        //    listBox1.Items.Add(ilk.sonDondur());
         //   listBox1.Items.Add("Burasi dizi indis takip alani");
            ilk.kuyrukEkle(x);
            listBox1.Items.Add(ilk.elemanDondur(b));
            b++;
            //if (ilk.ElemanAdet() == ilk.maxDondur())
            //{
            //    button1.Enabled = false;
            //    MessageBox.Show("Max Elaman Sayisina Ulasilmistir...");
            //}
          
        }

        private void button2_Click(object sender, EventArgs e)
        {
            // listBox1.Items.Add(ilk.ElemanAdet());
           // double g;

            //listBox1.Items.Add(ilk.elemanDondur(0));
           // listBox1.Items.Add(ilk.elemanDondur(1));
           // listBox1.Items.Add(ilk.elemanDondur(2));
            ilk.KuyruktanSil();
           // listBox1.Items.Add(g); 
              listBox1.Items.Clear();
            // listBox1.Items.Add(ilk.ElemanAdet());

            for (int i = 0; i < ilk.ElemanAdet(); i++)
            {
                listBox1.Items.Add(ilk.elemanDondur(i));

            }
         //   if (ilk.ElemanAdet() > 0)
          //  {
           //     listBox1.Items.Add(ilk.ElemanAdet());
           // }
            if (ilk.ElemanAdet() < ilk.maxDondur())
            {
                button1.Enabled = true;
              //  MessageBox.Show("Max Elaman Sayisina Ulasilmistir...");
            }
            // listBox1.Items.Add(ilk.elemanDondur(0));
            //   listBox1.Items.Add(ilk.elemanDondur(1));
            //   listBox1.Items.Add(ilk.elemanDondur(2));

        }

        private void button3_Click(object sender, EventArgs e)
        {

        }
    }
}
