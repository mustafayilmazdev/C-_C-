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

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {

        ArrayList ogrListe = new ArrayList();


        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            DialogResult sonuc;

            sonuc = MessageBox.Show("Ogrencisi eklensin mi?", "Ders 1", MessageBoxButtons.YesNo);
            if(sonuc ==DialogResult.Yes) { 
            string x;
            x = textBox1.Text;
            if (x != "")
            {
                listBox1.Items.Add(x);
            }
            else
            {
                MessageBox.Show("Hatali islem\nOgrenci adini girmediniz");             

            }
        }

            else
            {

                MessageBox.Show("Ogrenci ekleme islemi iptal edildi...");
            }

            textBox1.Clear();
            


    }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Deneme");
        }
    }
}
