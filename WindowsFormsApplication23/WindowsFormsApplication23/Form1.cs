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
namespace WindowsFormsApplication23
{
    public partial class Form1 : Form
    {

        SqlConnection baglanti = new SqlConnection("Data Source=DESKTOP-RL8PIGS;Initial Catalog=deneme;Integrated Security=True");
        SqlCommand komut;
        SqlDataAdapter verial, verial2;
        DataSet ds, ds2, ds3,ds4;

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'denemeDataSet2.Urunler' table. You can move, or remove it, as needed.
            this.urunlerTableAdapter.Fill(this.denemeDataSet2.Urunler);
            // TODO: This line of code loads data into the 'denemeDataSet1.Musteriler' table. You can move, or remove it, as needed.
            this.musterilerTableAdapter1.Fill(this.denemeDataSet1.Musteriler);
            // TODO: This line of code loads data into the 'denemeDataSet.Kategoriler' table. You can move, or remove it, as needed.
            this.kategorilerTableAdapter.Fill(this.denemeDataSet.Kategoriler);
            // TODO: This line of code loads data into the 'denemeDataSet.Musteriler' table. You can move, or remove it, as needed.
            this.musterilerTableAdapter.Fill(this.denemeDataSet.Musteriler);


        }

        private void button1_Click(object sender, EventArgs e)
        {
            komut = new SqlCommand("insert into Musteriler(AdiSoyadi,Adres,yas) values (@isim,@adres,@yas)", baglanti);

            komut.Parameters.AddWithValue("@isim", textBox1.Text);
            komut.Parameters.AddWithValue("@adres", textBox2.Text);
            komut.Parameters.AddWithValue("@yas", Convert.ToInt32(numericUpDown1.Value));

            try
            {
                baglanti.Open();
                komut.ExecuteNonQuery();
                baglanti.Close();
                MessageBox.Show("Müşteri Eklendi");
                listele();
            }
            catch
            {
                MessageBox.Show("Baglanti gerceklesemedi...");
                
            }


}

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
           
        }

        private void button7_Click(object sender, EventArgs e)
        {
            baglanti.Open();
            komut = new SqlCommand("select stok from urunler where urunId=' "+ Convert.ToInt32( comboBox3.SelectedValue)+"'", baglanti);
            int stok =(int) komut.ExecuteScalar();
            MessageBox.Show(stok.ToString());
            if (stok >= Convert.ToInt32(numericUpDown2.Value)) MessageBox.Show("Stok Uygun", "Urunler Kategoriler", MessageBoxButtons.OK, MessageBoxIcon.Asterisk);
            else
                MessageBox.Show("Stok Uygun Değil");
            MessageBox.Show("Kalan Bolum 29 Nisan Saat 17:00"); 
            baglanti.Close();
        }

        private void comboBox4_SelectedIndexChanged(object sender, EventArgs e)
        {
            baglanti.Open();
            string secilenTablo = comboBox4.Text;
            //   MessageBox.Show(secilenTablo);
            verial = new SqlDataAdapter("select * from " + secilenTablo , baglanti);
            ds4 = new DataSet();

            if (ds4.Tables.Count > 0) { 
            ds4.Tables.Clear(); }
            verial.Fill(ds4);
            dataGridView4.DataSource = ds4.Tables[0];
            
            baglanti.Close();
        }

        public Form1()
        {
            InitializeComponent();
        }

        private void tabPage1_Click(object sender, EventArgs e)
        {
           
        }


        void listele()
        {
            baglanti.Open();
            verial = new SqlDataAdapter("Select * from Musteriler", baglanti);
            ds = new DataSet();
            verial.Fill(ds);
            // dataGridView1.Rows.Clear();
            dataGridView1.DataSource = ds.Tables[0];
            baglanti.Close();

        }

    }
}
