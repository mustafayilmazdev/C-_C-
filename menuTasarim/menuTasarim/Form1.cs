using menuTasarim;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.DataFormats;

namespace menuTasarim
{
    public partial class Form1 : Form
    {
        /// <Fields>
        private Button currentButton;
        private Random random;
        private int tempIndex;
        private Form activeForm;
        /// </Fields>
        public Form1()
        {
            InitializeComponent();
            random = new Random();
            butonCocukFormKapat.Visible = false;
            
          //  this.MaximizedBounds = Screen.FromHandle(this.Handle).WorkingArea;
        }
        [DllImport("user32.DLL", EntryPoint = "ReleaseCapture")]
        private extern static void ReleaseCapture();
        [DllImport("user32.DLL", EntryPoint = "SendMessage")]
        private extern static void SendMessage(System.IntPtr hWnd, int wMsg, int wParam, int lParam);

        ///Methods
        private Color SelectThemeColor()
        {
            int index = random.Next(ThemeColor.ColorList.Count);
            while (tempIndex == index)
            {
               index= random.Next(ThemeColor.ColorList.Count);
               
            }
            tempIndex = index;
            string color = ThemeColor.ColorList[index];
            return ColorTranslator.FromHtml(color);
        }

        private void ActivateButton(object btnSender)
        {
            if (btnSender != null)
            {
                if (currentButton != (Button)btnSender)
                {
                    DisableButton();
                    Color color = SelectThemeColor();
                    currentButton = (Button)btnSender;
                    currentButton.BackColor = color;
                    currentButton.ForeColor = Color.White;
                    currentButton.Font= new System.Drawing.Font("Microsoft Sans Serif", 16.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
                    panelBaslik.BackColor = color;
                    panelLogo.BackColor = ThemeColor.ChangeColorBrightness(color,-0.5);
                    ThemeColor.PrimaryColor = color;
                    ThemeColor.SecondaryColor= ThemeColor.ChangeColorBrightness(color, -0.5);
                    butonCocukFormKapat.Visible = true;
                }
            }
        }

        private void DisableButton()
        {
            foreach(Control previousBtn in panelMenu.Controls)
            {
                if (previousBtn.GetType() == typeof(Button))
                {
                    previousBtn.BackColor = Color.Tan;
                    previousBtn.ForeColor = Color.Gainsboro;
                    previousBtn.Font= new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
                }
            }
        }

        private void OpenChildForm(Form childForm,object btnSender) {
            if(activeForm!=null)
            {
                activeForm.Close();
            }
            ActivateButton(btnSender);
            activeForm = childForm;
            childForm.TopLevel = false;
            childForm.FormBorderStyle = FormBorderStyle.None;
            childForm.Dock = DockStyle.Fill;
            this.panelGoruntu.Controls.Add(childForm);
            this.panelGoruntu.Tag = childForm;
            childForm.BringToFront();
            childForm.Show();
            lblBaslik.Text = childForm.Text;

        }

        private void butonEkle_Click(object sender, EventArgs e)
        {
            OpenChildForm(new sayfalar.FormEkle() ,sender );
        }

        private void butonGuncelle_Click(object sender, EventArgs e)
        {
            OpenChildForm(new sayfalar.FormGuncelle(), sender);
        }

        private void butonAra_Click(object sender, EventArgs e)
        {
            OpenChildForm(new sayfalar.formAra(), sender);
        }

        private void butonCocukFormKapat_Click(object sender, EventArgs e)
        {
            if (activeForm != null)
            {
                activeForm.Close();
                Reset();
            }
        }

        private void Reset()
        {
            DisableButton();
            lblBaslik.Text = "Ana Sayfa";
            panelBaslik.BackColor = Color.Orange;
            panelLogo.BackColor = Color.BurlyWood;
            currentButton = null;
            butonCocukFormKapat.Visible = false;
        }

        private void panelBaslik_MouseDown(object sender, MouseEventArgs e)
        {
            ReleaseCapture();
            SendMessage(this.Handle, 0x112, 0xf012, 0);
        }

        private void butonKapat_Click(object sender, EventArgs e)
        {
            Application.Exit();
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
    }
}
