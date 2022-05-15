using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace akcaSoftLogin.Menuler.Sayfalar
{
    public partial class Ara : Form
    {
        public Ara()
        {
            InitializeComponent();
        }

        private void butonAramaYap_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Arama sonuçları getirildi", "Sistem Mesajı", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
    }
}
