using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication9
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
            ilk.kuyrukEkle(x);
            listBox1.Items.Clear();
         //   for (int i = 0; i < ilk.ElemanAdet(); i++)
         //   {
           //     listBox1.Items.Add(ilk.elemanDondur(i));

//            }

            //  listBox1.Items.Add(ilk.elemanDondur(b));
            b++;
            if (ilk.ElemanAdet() == ilk.maxDondur())
            {
                button1.Enabled = false;
                MessageBox.Show("Max Elaman Sayisina Ulasilmistir...");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            ilk.KuyruktanSil();
            listBox1.Items.Clear();    
            for (int i = 0; i < ilk.ElemanAdet(); i++)
            {
                listBox1.Items.Add(ilk.elemanDondur(i));
            }
          //  if (ilk.ElemanAdet() > 0)
            //{
             //   listBox1.Items.Add(ilk.ElemanAdet());
            //}
            if (ilk.ElemanAdet() < ilk.maxDondur())
            {
                button1.Enabled = true;
            }    
        }
        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
