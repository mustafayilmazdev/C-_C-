using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication34
{
    public partial class Form1 : Form
    {

        double toplam = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
            listBox1.Items.Add(textBox1.Text);
            textBox1.Enabled = false;
            button1.Enabled = false;
            button2.Enabled = true;
            toplam = 0;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            string urunAdi = comboBox1.Text;
            double miktar = Convert.ToDouble(numericUpDown1.Value);
            double tutar=0;
            if (urunAdi == "Bıçak Demiri")
            {
                tutar = 4000;
            }

            if (urunAdi == "Bıçak Pulu")
            {
                tutar = 2000;
            }
            if (urunAdi == "Çimento")
            {
                tutar = 1000;
            }
            if (urunAdi == "Kömür")
            {
                tutar = 2500;
            }

            double a=tutar* miktar;
            toplam += a;

            listBox1.Items.Add(urunAdi + " " + miktar.ToString() + " Ton " +tutar);
        
        }

        private void button3_Click(object sender, EventArgs e)
        {
            DialogResult d = MessageBox.Show("Sipariş Kaydedilsin mi?", MessageBoxButtons.YesNo,MessageBoxIcon.Error);
            if (d == DialogResult.Yes)
            {
                button2.Enabled = false;
                MessageBox.Show(textBox1.Text + " - " + toplam + " Sipariş Kaydedildi...");
            }
            
        }
    }
}
