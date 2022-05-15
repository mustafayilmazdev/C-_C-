using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication11
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double x = double.Parse(textBox1.Text);
            listBox1.Items.Add("Burasi dizi indis takip alani");
            listBox1.Items.Add(ilk.basDondur());
            listBox1.Items.Add(ilk.sonDondur());
            listBox1.Items.Add("Burasi dizi indis takip alani");
            ilk.kuyrukEkle(x);
            listBox1.Items.Add(ilk.elemanDondur(b));
            b++;
            if (ilk.ElemanAdet() == ilk.maxDondur())
            {
                button1.Enabled = false;
                MessageBox.Show("Max Elaman Sayisina Ulasilmistir...");
            }


        }

        private void button2_Click(object sender, EventArgs e)
        {

        }
    }
}
