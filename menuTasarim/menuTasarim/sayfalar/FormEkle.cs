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
    public partial class FormEkle : Form
    {
        public FormEkle()
        {
            InitializeComponent();
            
        }
        private void LoadTheme() {

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
            label1.ForeColor = ThemeColor.SecondaryColor;
            label1.ForeColor = ThemeColor.PrimaryColor;

        }

        private void FormEkle_Load(object sender, EventArgs e)
        {
            LoadTheme();
        }
    }
}
