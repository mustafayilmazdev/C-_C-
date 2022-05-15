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

namespace WindowsFormsApplication28
{
    public partial class Form1 : Form
    {
        SqlConnection baglanti = new SqlConnection("Data Source=DESKTOP-RL8PIGS;Initial Catalog=deneme;Integrated Security=True");
        SqlCommand komut;
        SqlDataAdapter verial;
        DataSet ds;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            baglanti.Open();
            komut = new SqlCommand("veriGetir", baglanti);
            komut.CommandType = CommandType.StoredProcedure;
            verial = new SqlDataAdapter(komut);
            ds = new DataSet();
            verial.Fill(ds);
            dataGridView1.DataSource = ds.Tables[0];
            baglanti.Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            baglanti.Open();
            komut = new SqlCommand("StokAdetiGetir", baglanti);
            komut.CommandType = CommandType.StoredProcedure;
            komut.Parameters.AddWithValue("@urunid", Convert.ToInt32(numericUpDown1.Value));
            verial = new SqlDataAdapter(komut);
            ds = new DataSet();
            verial.Fill(ds);
            dataGridView2.DataSource = ds.Tables[0];
            baglanti.Close();

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'denemeDataSet.Musteriler' table. You can move, or remove it, as needed.
            this.musterilerTableAdapter.Fill(this.denemeDataSet.Musteriler);

        }

        private void button3_Click(object sender, EventArgs e)
        {
            baglanti.Open();
            komut = new SqlCommand("siparisListeleMusteri", baglanti);
            komut.CommandType = CommandType.StoredProcedure;
            komut.Parameters.AddWithValue("@Tutar", Convert.ToInt32(numericUpDown2.Value));
            komut.Parameters.AddWithValue("@id", Convert.ToInt32( comboBox1.SelectedValue));
            verial = new SqlDataAdapter(komut);
            ds = new DataSet();
            verial.Fill(ds);
            dataGridView3.DataSource = ds.Tables[0];
            baglanti.Close();
        }
    }
}
