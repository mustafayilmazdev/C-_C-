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
    public partial class Guncelle : Form
    {
        public Guncelle()
        {
            InitializeComponent();
        }

        private void butonGuncellemeYap_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Kayıt başarılı bir şekilde güncellendi", "Sistem Mesajı", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
    }
}
