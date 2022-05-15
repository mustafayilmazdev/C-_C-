using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace elYapimiSatis
{
    public partial class sablon : System.Web.UI.MasterPage
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

       
        protected void Button2_Click1(object sender, EventArgs e)
        {
            Response.Redirect("tablo.aspx");
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            Response.Redirect("ana_sayfa.aspx");
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            Response.Redirect("kara_kalem.aspx");
        }

        protected void Button4_Click(object sender, EventArgs e)
        {
            Response.Redirect("fotograf.aspx");
        }

        protected void Button5_Click(object sender, EventArgs e)
        {
            Response.Redirect("sanatcilar.aspx");
        }
    }
}