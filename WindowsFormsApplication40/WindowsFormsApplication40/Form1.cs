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

namespace WindowsFormsApplication40
{
    public partial class Form1 : Form


    {
        ArrayList personel = new ArrayList();
        ArrayList personel_bolum = new ArrayList();
        ArrayList personel_izin = new ArrayList();
        int secilen;
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                personel.RemoveAt(listBox1.SelectedIndex);
                personel_bolum.RemoveAt(listBox1.SelectedIndex);
               personel_izin.RemoveAt(listBox1.SelectedIndex);
                listele();
                if (personel.Count == 0)
                {
                    button2.Enabled = false;
                }
            }
            catch 
            {
                MessageBox.Show("Personel Seçiniz");


            }
        }

        void listele()
        {
            listBox1.Items.Clear();
            comboBox2.Items.Clear();
            for (int i = 0; i < personel.Count; i++)
            {
                listBox1.Items.Add(personel[i].ToString() + " - " + personel_bolum[i].ToString()+ " - " + personel_izin[i].ToString());
                comboBox2.Items.Add(personel[i].ToString());
            }


        }

        private void button1_Click(object sender, EventArgs e)
        {

            if (textBox1.Text == "")
            {
                MessageBox.Show("Lütfen Personel Adini Giriniz!", "UYARI");
            }

            else { 
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

        private void tabPage2_Click(object sender, EventArgs e)
        {

        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            secilen = comboBox2.SelectedIndex;
            label5.Text = personel_izin[secilen].ToString();
        }

        private void button3_Click(object sender, EventArgs e)
        {

            DateTime baslangictarihi = new DateTime();
            DateTime bitistarihi = new DateTime();

            baslangictarihi = dateTimePicker1.Value;
            bitistarihi = dateTimePicker2.Value;

            if (baslangictarihi > bitistarihi)
            {
                MessageBox.Show("Başlangıç Tarihi Bitiş Tarihinden Önce Olmalıdır...!");
            }

            else
            {
                TimeSpan zaman = bitistarihi - baslangictarihi;
                int gun = zaman.Days;

                if (radioButton2.Checked == true)
                {
                    if (Convert.ToInt32(label5.Text ) > gun)
                    {
                        personel_izin[secilen] = Convert.ToInt32(personel_izin[secilen]) - gun;
                        label5.Text = personel_izin[secilen].ToString();
                        listBox2.Items.Add(comboBox2.Text+" - Yıllık İzin - "+gun.ToString()+ " - "+dateTimePicker2.Value);
                    }
                    else
                    {

                        MessageBox.Show("Personelin Yeterli İzni Yoktur...!");
                    }
                }

                else
                {
                    listBox2.Items.Add(comboBox2.Text + " - " + "Raporlu İzin " + " - " + gun.ToString() + " - " + dateTimePicker2.Value);
                }



            }

        }
    }
}
