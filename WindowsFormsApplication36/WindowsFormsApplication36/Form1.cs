using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Collections; // Arraylist için

namespace WindowsFormsApplication36
{
    public partial class Form1 : Form
    {

        ArrayList personel = new ArrayList();
        ArrayList personel_bolum = new ArrayList();
        ArrayList personel_izin = new ArrayList();

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "")
            {
                MessageBox.Show("Lutfen ad ve bolum alanlarını doldurunuz!", "Uyarı!!");
            }
            else
            {
                personel.Add(textBox1.Text);
                personel_bolum.Add(comboBox1.Text);
                if (comboBox1.Text == "Dikim") personel_izin.Add(20);
                else if (comboBox1.Text == "Ütü") personel_izin.Add(15);
                else if (comboBox1.Text == "Paketleme") personel_izin.Add(25);
                else if (comboBox1.Text == "Satış") personel_izin.Add(30);

                textBox1.Text = "";
                comboBox1.Text = "";
                button2.Enabled = true;
                listele();



            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                personel.RemoveAt(listBox1.SelectedIndex);
                personel_bolum.RemoveAt(listBox1.SelectedIndex);
                personel_izin.RemoveAt(listBox1.SelectedIndex);
                listele();

                if (personel.Count == 0) button2.Enabled = false;
            }
            catch
            {
                MessageBox.Show("Personel Seçiniz");
            }
        }

        private void tabPage1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            button2.Enabled = false;
        }
        void listele()
        {
            listBox1.Items.Clear();
            comboBox2.Items.Clear();
            for (int i = 0; i < personel.Count; i++)
            {
                listBox1.Items.Add(personel[i].ToString() + " - " + personel_bolum[i].ToString());
                comboBox2.Items.Add(personel[i].ToString());
            }
        }
    }
}
