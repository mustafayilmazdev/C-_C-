using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace akcaSoftLogin.Menuler
{
    public partial class AnaSayfa : Form
    {
        readonly int[] defaultRgbRenk = { 51, 51, 76 };
        readonly int[] seciliRgbRenk = { 24, 24, 36  };
        private Form activeForm;
        public AnaSayfa()
        {
            InitializeComponent();
        }

        [DllImport("user32.DLL", EntryPoint = "ReleaseCapture")]
        private extern static void ReleaseCapture();
        [DllImport("user32.DLL", EntryPoint = "SendMessage")]
        private extern static void SendMessage(System.IntPtr hWnd, int wMsg, int wParam, int lParam);

        private void button1_Click(object sender, EventArgs e)
        {
            System.Windows.Forms.Application.Exit();
            this.Close();
        }

        private void ekleButon_Click(object sender, EventArgs e)
        {
            seciliButonRenklendir(ekleButon.Name);
            formAc(new Sayfalar.Ekle());
           
        }

        private void formAc(Form childForm)
        {
            if (activeForm != null)
            {
                activeForm.Close();
            }
            activeForm = childForm;
            childForm.TopLevel = false;
            childForm.FormBorderStyle = FormBorderStyle.None;
            childForm.Dock = DockStyle.Fill;
            this.panelGoruntu.Controls.Add(childForm);
            this.panelGoruntu.Tag = childForm;
            childForm.BringToFront();
            childForm.Show();

        }


        void seciliButonRenklendir(string butonAdi)
        {
            if (butonAdi == ekleButon.Name)
            {
                ekleButon.BackColor = Color.FromArgb(seciliRgbRenk[0], seciliRgbRenk[1], seciliRgbRenk[2]);
                guncelleButon.BackColor = Color.FromArgb(defaultRgbRenk[0], defaultRgbRenk[1], defaultRgbRenk[2]);
                araButon.BackColor = Color.FromArgb(defaultRgbRenk[0], defaultRgbRenk[1], defaultRgbRenk[2]);
                lblBaslik.Text = ekleButon.Text;
            }
            else if (butonAdi == guncelleButon.Name)
            {
                ekleButon.BackColor = Color.FromArgb(defaultRgbRenk[0], defaultRgbRenk[1], defaultRgbRenk[2]);
                guncelleButon.BackColor = Color.FromArgb(seciliRgbRenk[0], seciliRgbRenk[1], seciliRgbRenk[2]);
                araButon.BackColor = Color.FromArgb(defaultRgbRenk[0], defaultRgbRenk[1], defaultRgbRenk[2]);
                lblBaslik.Text = guncelleButon.Text;
            }
            else
            {
                ekleButon.BackColor = Color.FromArgb(defaultRgbRenk[0], defaultRgbRenk[1], defaultRgbRenk[2]);
                guncelleButon.BackColor = Color.FromArgb(defaultRgbRenk[0], defaultRgbRenk[1], defaultRgbRenk[2]);
                araButon.BackColor = Color.FromArgb(seciliRgbRenk[0], seciliRgbRenk[1], seciliRgbRenk[2]);
                lblBaslik.Text = araButon.Text;
            }
        }

        private void guncelleButon_Click(object sender, EventArgs e)
        {
            seciliButonRenklendir(guncelleButon.Name);
            formAc(new Sayfalar.Guncelle());
        }

        private void araButon_Click(object sender, EventArgs e)
        {
            seciliButonRenklendir(araButon.Name);
            formAc(new Sayfalar.Ara());
        }

        private void butonMaksimize_Click(object sender, EventArgs e)
        {
            if (WindowState == FormWindowState.Normal)
            {
                this.WindowState = FormWindowState.Maximized;
            }
            else
            {
                this.WindowState = FormWindowState.Normal;
            }
        }

        private void butonMinimize_Click(object sender, EventArgs e)
        {
            this.WindowState = FormWindowState.Minimized;
        }

        private void panelBaslik_MouseDown(object sender, MouseEventArgs e)
        {
            ReleaseCapture();
            SendMessage(this.Handle, 0x112, 0xf012, 0);
        }

        private void panelLogo_DoubleClick(object sender, EventArgs e)
        {
            if (WindowState == FormWindowState.Normal)
            {
                this.WindowState = FormWindowState.Maximized;
            }
            else
            {
                this.WindowState = FormWindowState.Normal;
            }
        }

        private void AnaSayfa_Paint(object sender, PaintEventArgs e)
        {
            Graphics mgraphics = e.Graphics;
            Pen pen = new Pen(Color.FromArgb(52, 32, 101), 1);

            Rectangle area = new Rectangle(0, 0, this.Width - 1, this.Height - 1);
            LinearGradientBrush lgb = new LinearGradientBrush(area, Color.FromArgb(42, 26, 80), Color.FromArgb(107, 60, 141), LinearGradientMode.ForwardDiagonal);
            mgraphics.FillRectangle(lgb, area);
            mgraphics.DrawRectangle(pen, area);
        }
    }
}
