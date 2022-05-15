using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
namespace WebApplication6
{
    public partial class WebForm5 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            SqlConnection baglanti = new SqlConnection("Data Source=DESKTOP-RL8PIGS;Initial Catalog=SAvT;Integrated Security=True");
            baglanti.Open();

            SqlCommand komut = new SqlCommand("Insert Into ogrenci(ogrAd,ogrSoyad,iletisimNo,ogrSinif) values ('" + TextBox1.Text + "','" + TextBox2.Text + "','" + TextBox4.Text + "','" + DropDownList1.Text + "'     )  ", baglanti);
            komut.ExecuteNonQuery();

        }
    }
}