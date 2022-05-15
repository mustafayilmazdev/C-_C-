using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Drawing;
using System.Drawing.Drawing2D;
namespace akcaSoftLogin
{
    public partial class Login : Form
    {
        public Login()
        {
            InitializeComponent();
        }

        private void kapatmaButonu_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void pictureBox2_Click(object sender, EventArgs e)
        {
            bool durum = sifreTextBox.UseSystemPasswordChar;
            if (durum)
            {
                sifreTextBox.UseSystemPasswordChar = false;
            }
            else
            {
                sifreTextBox.UseSystemPasswordChar = true;
            }
        }

        private void emailTextBox_Enter(object sender, EventArgs e)
        {
            emailTextBox.BackColor = Color.Gainsboro;
            emailPanel.BackColor = Color.LightGray;
            sifreTextBox.BackColor = Color.AliceBlue;
            sifrePanel.BackColor = Color.White;
        }

        private void sifreTextBox_Enter(object sender, EventArgs e)
        {
            emailTextBox.BackColor = Color.AliceBlue;
            emailPanel.BackColor = Color.White;
            sifreTextBox.BackColor = Color.Gainsboro;
            sifrePanel.BackColor = Color.LightGray;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
            Menuler.AnaSayfa anasayfa = new Menuler.AnaSayfa();
            anasayfa.Show();
        }

        private void Login_Paint(object sender, PaintEventArgs e)
        {
            Graphics mgraphics = e.Graphics;
            Pen pen = new Pen(Color.FromArgb(52, 32, 101),1);

            Rectangle area = new Rectangle(0,0,this.Width-1,this.Height-1 );
            LinearGradientBrush lgb = new LinearGradientBrush(area, Color.FromArgb(42, 26, 80), Color.FromArgb(107, 60, 141),LinearGradientMode.ForwardDiagonal);
            mgraphics.FillRectangle(lgb, area);
            mgraphics.DrawRectangle(pen, area);
        }
    }
}
