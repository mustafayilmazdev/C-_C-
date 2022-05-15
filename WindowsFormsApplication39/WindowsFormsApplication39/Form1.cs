using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Collections;

namespace WindowsFormsApplication39
{
    public partial class Form1 : Form
    {
        double toplam = 0, kismi = 0;
        ArrayList adet = new ArrayList();
        ArrayList ttutar = new ArrayList();
       
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "") { 
            listBox1.Items.Add(textBox1.Text);
                button2.Enabled = true;
                button1.Enabled = false;
            }
            else
            {
                MessageBox.Show("Lütfen Müşteri Adı Alanını Doldurunuz", "Uyarı");
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Sipariş Toplamı: " + toplam,"Hesap Toplam");
            button2.Enabled = false;
            button3.Enabled = false;
            button1.Enabled = true;
            hesapla();
            


        }

        void hesapla()
        {
            listBox2.Items.Add("Hangi Urunden Kac Ton Satildi");
            listBox2.Items.Add("İnşaat Demiri: "+ adet[0]);
            listBox2.Items.Add("İnşaat Kumu: " + adet[1]);
            listBox2.Items.Add("Çimento: " + adet[2]);
            listBox2.Items.Add("Kömür: " + adet[3]);

            listBox2.Items.Add("HANGİ ÜRÜNDEN KAÇ TL KAZANILDI");
            listBox2.Items.Add("İnşaat Demiri: " + ttutar[0]);
            listBox2.Items.Add("İnşaat Kumu: " + ttutar[1]);
            listBox2.Items.Add("Çimento: " + ttutar[2]);
            listBox2.Items.Add("Kömür: " + ttutar[3]);
            Double tt = Convert.ToDouble(ttutar[0]) + Convert.ToDouble(ttutar[1]) + Convert.ToDouble(ttutar[2]) + Convert.ToDouble(ttutar[3]);
           listBox2.Items.Add ("Toplam Kazanç: " + tt.ToString());

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            adet.Add(0);
            adet.Add(0);
            adet.Add(0);
            adet.Add(0);



            ttutar.Add(0);
            ttutar.Add(0);
            ttutar.Add(0);
            ttutar.Add(0);

        }

        private void button2_Click(object sender, EventArgs e)
        {
            kismi = 0;
            string a = "";
            a += comboBox1.Text+" - ";
            if (comboBox1.Text == "İnşaat Demiri")
            {
                kismi += 4000 * Convert.ToDouble(numericUpDown1.Value);
                a += kismi.ToString();
                listBox1.Items.Add(a);
                adet[0] = Convert.ToDouble(adet[0])+ Convert.ToDouble( numericUpDown1.Value);
                ttutar[0] = Convert.ToDouble(ttutar[0]) + kismi;
            }

            if (comboBox1.Text == "İnşaat Kumu")
            {
                kismi += 2000 * Convert.ToDouble(numericUpDown1.Value);
                a += kismi.ToString();
                listBox1.Items.Add(a);
                adet[1] = Convert.ToDouble(adet[1]) + Convert.ToDouble(numericUpDown1.Value);
                ttutar[1] = Convert.ToDouble(ttutar[1]) + kismi;

            }
            if (comboBox1.Text == "Çimento")
            {
                kismi += 1000 * Convert.ToDouble(numericUpDown1.Value);
                a += kismi.ToString();
                listBox1.Items.Add(a);
                adet[2] = Convert.ToDouble(adet[2]) + Convert.ToDouble(numericUpDown1.Value);
                ttutar[2] = Convert.ToDouble(ttutar[2]) + kismi;

            }
            if (comboBox1.Text == "Kömür")
            {
                kismi += 2500 * Convert.ToDouble(numericUpDown1.Value);
                a += kismi.ToString();
                listBox1.Items.Add(a);
                adet[3] = Convert.ToDouble(adet[3]) + Convert.ToDouble(numericUpDown1.Value);
                ttutar[3] = Convert.ToDouble(ttutar[3]) + kismi;

            }


            toplam += kismi;

            button3.Enabled = true;
              
        }
    }
}
