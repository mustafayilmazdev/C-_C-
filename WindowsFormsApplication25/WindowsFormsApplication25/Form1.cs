using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace WindowsFormsApplication25
{
    public partial class Form1 : Form
    {

        SqlConnection baglanti = new SqlConnection("Server=DESKTOP-RL8PIGS; Initial Catalog=deneme;Integrated Security=true");//baglantının yolunun sağlanması
        SqlCommand komut;//Veritabanındaki komut talebi
        SqlDataAdapter verial;
        DataSet ds;
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

            komut = new SqlCommand("insert into Musteriler(AdiSoyadi,Adres,yas) values (@isim,@adres,@yas) ", baglanti);
            komut.Parameters.AddWithValue("@isim",textBox1.Text);
            komut.Parameters.AddWithValue("@adres", textBox2.Text);
            komut.Parameters.AddWithValue("@yas", Convert.ToInt32(numericUpDown1.Value));

            try
            {
                baglanti.Open();
            komut.ExecuteNonQuery();
                baglanti.Close();
            }
            catch 
            {

                MessageBox.Show("Baglanti Saglanamadi");
            }
           listele();
        }


        void listele()
        {

            baglanti.Open();
            verial = new SqlDataAdapter(" select * from musteriler ", baglanti);
            ds = new DataSet();
            verial.Fill(ds);
            dataGridView1.DataSource = ds.Tables[0];
            baglanti.Close();
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            baglanti.Open();
            komut = new SqlCommand("delete from musteriler where musteriID='"+textBox3.Text+"'",baglanti);

            komut.ExecuteNonQuery();
            baglanti.Close();
            listele();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            baglanti.Open();
            komut = new SqlCommand("update musteriler set adres='"+textBox4.Text+"' where musteriID='"+textBox3.Text+"'", baglanti);

            komut.ExecuteNonQuery();
            baglanti.Close();
            listele();
        }

        private void dataGridView1_CellContentDoubleClick(object sender, DataGridViewCellEventArgs e)
        {
            textBox3.Text = dataGridView1.CurrentRow.Cells[0].Value.ToString();
               label4.Text = dataGridView1.CurrentRow.Cells[0].Value.ToString(); 
        }
        
    }
}
