using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient; // sql komutlarının kütüphanesi
namespace WindowsFormsApplication26
{
    public partial class Form1 : Form
    {
        
        SqlConnection baglanti = new SqlConnection("server=DESKTOP-RL8PIGS;initial catalog=deneme; Integrated Security=true");// bağlantı yolu // NEREYE BAĞLANACAĞIMIZI GÖSTERİYOR
        SqlCommand komut;
        SqlDataAdapter verial;//VERİYİ ALIP GETİRİYOR KARMAŞIK OLARAK
        DataSet ds;// DATASET VERİYİ TABLO OLARAK İŞLİYOR

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            listele();

        }

        private void button1_Click(object sender, EventArgs e)
        {
            baglanti.Open();// YOLU KULLANIP VERİTABANINA GİRİŞİ AÇIYOR
            komut = new SqlCommand("insert into musteriler(AdiSoyadi,Adres,yas) values(@isim,@adres,@yas)", baglanti);
            komut.Parameters.AddWithValue("@isim",textBox1.Text);
            komut.Parameters.AddWithValue("@adres", textBox2.Text);
            komut.Parameters.AddWithValue("@yas", Convert.ToInt32(numericUpDown1.Value));
            komut.ExecuteNonQuery(); // VERİTABANINDA KOMUT SATIRINI ÇALIŞTIRIYOR " + textBox1.Text + ",'" + textBox2.Text + "
            baglanti.Close();
            listele();

        }
        void listele()
        {
            baglanti.Open();// baglanti acildi
            verial = new SqlDataAdapter("select * from musteriler ", baglanti);//sorgu veritabanında çalıştırıldı sonucundaki veriler c# ' a getirildi
            ds = new DataSet();// datasetin alanını istedik
            verial.Fill(ds);// gelen verileri ds ye tablo olarak yerleştirdik
            dataGridView1.DataSource = ds.Tables[0];//datagridview' ımızı tablolanmış ds verileriyle doldurduk

            baglanti.Close();// baglantiyi kapattık


        }

        private void button2_Click(object sender, EventArgs e)
        {
            baglanti.Open();
            komut= new SqlCommand("delete from musteriler where musteriID='" + textBox3.Text + "'", baglanti);
            komut.ExecuteNonQuery();
            baglanti.Close();
            listele();
        }

        private void dataGridView1_CellContentDoubleClick(object sender, DataGridViewCellEventArgs e)
        {
            textBox3.Text = dataGridView1.CurrentRow.Cells[0].Value.ToString();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            baglanti.Open();
            komut = new SqlCommand("update musteriler set adres='"+textBox4.Text+"'where musteriID='"+textBox3.Text+"'", baglanti);
            komut.ExecuteNonQuery();
            baglanti.Close();
            listele();

        }
    }
}
