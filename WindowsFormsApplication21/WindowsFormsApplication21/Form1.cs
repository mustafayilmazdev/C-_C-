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
namespace WindowsFormsApplication21
{
    public partial class Form1 : Form
    {

        SqlConnection baglanti = new SqlConnection("Data Source=DESKTOP-RL8PIGS;Initial Catalog=deneme;Integrated Security=True");
        SqlCommand komut;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            baglanti.Open();
        }

        private void button1_Click(object sender, EventArgs e)
        {


         


            komut = new SqlCommand("insert into Musteriler(AdiSoyadi, Adres, yas) values (@isim, @adres, @yas)", baglanti);

            komut.Parameters.AddWithValue("@isim", textBox1.Text);
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
                MessageBox.Show("Bağlantı gerçekleşmedi...");

            }


        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            textBox2.Clear();
            numericUpDown1.Value = 18;
        }
    }
}
