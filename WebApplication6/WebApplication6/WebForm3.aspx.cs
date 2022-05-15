using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;

namespace WebApplication6
{
    public partial class WebForm3 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            SqlConnection baglanti = new SqlConnection("Data Source=DESKTOP-RL8PIGS;Initial Catalog=SAvT;Integrated Security=True");
            DateTime date = DateTime.Now;
            string gonder = " ";
            gonder = date.ToString("dd/MM/yyyy");
            baglanti.Open();

            SqlCommand ilkucret = new SqlCommand("select top 1 kalanUcret from odeme where ogrNo='"+DropDownList2.Text+"'", baglanti);//toplam
            int kayitTutari = Convert.ToInt32(ilkucret.ExecuteScalar());
            SqlCommand ucret = new SqlCommand("select top 1 kalanUcret from odeme where ogrNO='"+ DropDownList2.Text+"' order by odemeID desc ", baglanti);//kalan          
            int iucret = Convert.ToInt32(ucret.ExecuteScalar());
            if (iucret >= Convert.ToInt32(TextBox3.Text)) { 
            int kalan =iucret- Convert.ToInt32( TextBox3.Text);
                int toplamOdeme = kayitTutari - kalan;
                SqlCommand komut = new SqlCommand("Insert Into odeme(ogrNo,muhasebeNo,odemeSekli,odenenUcret,kalanUcret,islemTarihi) values ('" + DropDownList2.Text + "','" + 1 + "', '" + DropDownList1.Text + "', '" + TextBox3.Text + "','" + kalan + "' , '" + gonder.ToString() + "'  )  ", baglanti);
                SqlCommand komut2 = new SqlCommand("UPDATE toplamOdeme SET toplamOdenen = '"+toplamOdeme+"',kalanUcret='"+kalan+"' WHERE ogrNo='"+DropDownList2.Text+"'  ", baglanti);
                komut2.ExecuteNonQuery();
                komut.ExecuteNonQuery();
                Response.Write("<script>alert('Ödeme Gerçekleştirildi')</script>");

            }
            else
            {
                Response.Write("<script>alert('Ödeme Tutarı Toplam Ücretten Fazla Olamaz')</script>");
            }



           
            baglanti.Close();

        }

        protected void Button2_Click(object sender, EventArgs e)
        {

        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            Response.Redirect("WebForm1.aspx");
        }
    }
}