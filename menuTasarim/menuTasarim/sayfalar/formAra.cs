using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace menuTasarim.sayfalar
{
    public partial class formAra : Form
    {
        public formAra()
        {
            InitializeComponent();
           
        }

        private void LoadTheme()
        {

            foreach (Control butonlar in this.Controls)
            {
                if (butonlar.GetType() == typeof(Button))
                {
                    Button buton = (Button)butonlar;
                    buton.BackColor = ThemeColor.PrimaryColor;
                    buton.ForeColor = Color.Black;
                    buton.FlatAppearance.BorderColor = ThemeColor.SecondaryColor;
                }
            }


        }

        private void formAra_Load(object sender, EventArgs e)
        {
            LoadTheme();
        }
    }
}
