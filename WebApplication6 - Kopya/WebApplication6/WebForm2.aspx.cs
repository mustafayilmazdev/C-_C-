using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;

namespace WebApplication6
{
    public partial class WebForm2 : System.Web.UI.Page
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

            SqlCommand komut = new SqlCommand("Insert Into ogrenci(ogrAd,ogrSoyad,iletisimNo,ogrSinif) values ('" + TextBox1.Text + "','" + TextBox2.Text + "','" + TextBox4.Text + "','"+ DropDownList1.Text + "'     )  ", baglanti);

            komut.ExecuteNonQuery();

            //idlerin alinmasi
            SqlCommand oID = new SqlCommand("select top 1 ogrNo from ogrenci order by ogrNo desc   ", baglanti);
            int ID = Convert.ToInt32(oID.ExecuteScalar());            
            //idlerin alinmasi


            SqlCommand komut2 = new SqlCommand("Insert Into kayit(ogrNo,yoneticiNo,kayitTarihi) values ('" + ID + "','" + 1+ "','" + gonder + "'    )  ", baglanti);




            int baslangic = 0;
            string a = DropDownList1.Text;
            if (a == "A1" || a == "A2")
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




            SqlCommand komut3 = new SqlCommand("Insert Into odeme(ogrNo,muhasebeNo,odemeSekli,odenenUcret,kalanUcret,islemTarihi) values ('" +ID+ "','" + 1 + "', '"+ "Henuz Odeme Yok"+"', '"+0+ "','" + baslangic + "' ,'" + gonder + "'  )  ", baglanti);
            SqlCommand komut4 = new SqlCommand("Insert Into toplamOdeme(ogrNo,toplamOdenen,kalanUcret) values ('" + ID + "','" + 0 + "', '" + baslangic + "'  )  ", baglanti);
            komut2.ExecuteNonQuery();
            komut3.ExecuteNonQuery();
            komut4.ExecuteNonQuery();
            baglanti.Close();

            Page.Response.Redirect(Page.Request.Url.ToString());
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            Response.Redirect("WebForm1.aspx");
        }
    }
}