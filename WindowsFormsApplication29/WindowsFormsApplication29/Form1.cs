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
namespace WindowsFormsApplication29
{
    public partial class Form1 : Form
    {
        SqlConnection baglanti = new SqlConnection("Data Source=DESKTOP-RL8PIGS;Initial Catalog=kutuphane;Integrated Security=True");
        SqlCommand komut;
        SqlDataAdapter verial;
        DataSet ds;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'kutuphaneDataSet.ogrenci' table. You can move, or remove it, as needed.
            this.ogrenciTableAdapter.Fill(this.kutuphaneDataSet.ogrenci);

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string a = "Mustafa";
            baglanti.Open();
            
            verial = new SqlDataAdapter
            ("select ogrenci.ogrno,ogrenci.ograd,ogrenci.ogrsoyad,sinif,count(islem.islemno) as 'Kitap Sayisi' from islem right join ogrenci on ogrenci.ogrno = islem.ogrno where ograd='"+comboBox1.Text+"' group by ogrenci.ogrno, ogrenci.ograd, ogrenci.ogrsoyad, sinif ", baglanti);
            ds = new DataSet();
            verial.Fill(ds);
            dataGridView1.DataSource = ds.Tables[0];
            baglanti.Close();


        }

        private void button2_Click(object sender, EventArgs e)
        {
            baglanti.Open();
            komut = new SqlCommand("kitapSayisii", baglanti);
            komut.CommandType = CommandType.StoredProcedure;
            komut.Parameters.AddWithValue("@ad", comboBox2.Text);
            verial = new SqlDataAdapter(komut);
            ds = new DataSet();
            verial.Fill(ds);
            dataGridView2.DataSource = ds.Tables[0];
            baglanti.Close();

        }
    }
}
