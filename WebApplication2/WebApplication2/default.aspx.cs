using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;

namespace WebApplication2
{
    public partial class _default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            SqlConnection con = new SqlConnection("Data Source=DESKTOP-RL8PIGS;Initial Catalog=dershane;Integrated Security=True");
            con.Open();
            SqlCommand cmd = new SqlCommand("Insert Into bilgi(ad,soyad) values ('" + TextBox1.Text + "','" + TextBox2.Text + "') ",con);

            cmd.ExecuteNonQuery();

        }

        protected void ListBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}