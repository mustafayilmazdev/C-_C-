using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Data.Sql;
using System.Data.SqlTypes;


namespace WebApplication3
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        int toplamTutar=0;
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            SqlConnection baglanti = new SqlConnection("Data Source=DESKTOP-RL8PIGS;Initial Catalog=odev;Integrated Security=True");
            baglanti.Open();
            SqlCommand komut = new SqlCommand("Insert Into ogrenci(Ad,Soyad,Sinif) values ('"+TextBox1.Text +"','" +  TextBox2.Text+"','"+ TextBox3.Text + "'     )  ",baglanti);
            komut.ExecuteNonQuery(); 
            
            SqlCommand komut2 = new SqlCommand("select top 1 id from ogrenci order by id desc   ",baglanti);
        //    SqlDataReader veri = komut2.ExecuteReader();
            

            int say = Convert.ToInt32(komut2.ExecuteScalar());
            Label4.Text = say.ToString();
            int baslangic = 0;
            string a = TextBox3.Text;
            if (a == "A1"||a=="A2")
            {
                baslangic = 10000;
            }
            else if (a == "B1" || a == "B2")
            {

                baslangic = 7000;
            }
            else if (a == "C1" || a == "C2")
            {

                baslangic = 5000;
            }
            Label5.Text = baslangic.ToString();
            SqlCommand cmd = new SqlCommand("Insert Into odeme(ogrid,DonemUcreti,odemeTipi,odenenUcret,kalanUcret) values ('" + say + "','" + baslangic + "','" + "Henuz Odeme Yok" + "','" + 0 + "','" + 0 + "' )",baglanti);
            cmd.ExecuteNonQuery();
            Response.Write("<script>alert('Kayit Basarili...!');</script>");
            TextBox1.Text = "";
            TextBox2.Text = "";
            TextBox3.Text = "";

          //  Page.Response.Redirect(Page.Request.Url.ToString());
            baglanti.Close();
            }

        protected void GridView1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            SqlConnection bag = new SqlConnection("Data Source=DESKTOP-RL8PIGS;Initial Catalog=odev;Integrated Security=True");
            bag.Open();
            int kalan;
            kalan = toplamTutar - Convert.ToInt32(TextBox6.Text);
            SqlCommand cmd = new SqlCommand("Insert Into odeme(DonemUcreti,odemeTipi,odenenUcret,kalanUcret) values ('" + toplamTutar + "','" +  TextBox5.Text + "','" +Convert.ToInt32( TextBox6.Text) + "','" + kalan+ "' ) where ogrid=='" + TextBox4.Text+ "')");
        }
    }
}