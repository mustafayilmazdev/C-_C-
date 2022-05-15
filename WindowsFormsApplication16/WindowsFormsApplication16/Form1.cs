using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication16
{
    public partial class Form1 : Form
    {
        double a,b,c=0,k;
        string islem;
        //int sW = 1280;
        //int sH = 800;
        
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text=="0"){
                textBox1.Text = "1";
            }
            else
            {
                textBox1.Text += "1";
            }

        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "2";
            }
            else
            {
                textBox1.Text += "2";
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "3";
            }
            else
            {
                textBox1.Text += "3";
            }
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "4";
            }
            else
            {
                textBox1.Text += "4";
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "5";
            }
            else
            {
                textBox1.Text += "5";
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "6";
            }
            else
            {
                textBox1.Text += "6";
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "7";
            }
            else
            {
                textBox1.Text += "7";
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "8";
            }
            else
            {
                textBox1.Text += "8";
            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "9";
            }
            else
            {
                textBox1.Text += "9";
            }
        }

        private void button10_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "0")
            {
                textBox1.Text += "0";
            }
            else
            {
                textBox1.Text += "0";
            }
        }

        private void button13_Click(object sender, EventArgs e)
        {
            if (islem == "+")
            {
                islem = "+";
                a = Convert.ToInt32(textBox1.Text);
                a += Convert.ToInt32(label1.Text);
                textBox1.Clear();
                label1.Text = Convert.ToString(a);
            }
            else
            {
                islem = "+";
                int a = Convert.ToInt32(label1.Text);
                a += Convert.ToInt32(textBox1.Text);
                textBox1.Text = Convert.ToString(a);
            }
        }

        private void button18_Click(object sender, EventArgs e)
        {
            if (islem == "+")
            {
                int b;
                b = Convert.ToInt32(textBox1.Text);
                textBox1.Text = Convert.ToString(a + b);
                label1.Text = "0";
            }
            if (islem == "-")
            {
                int b;
                b = Convert.ToInt32(textBox1.Text);
                textBox1.Text = Convert.ToString(a - b);
                label1.Text = "0";
            }
            if (islem == "*")
            {
                
                if (label1.Text == "0")
                {
                    a = Convert.ToInt32(textBox1.Text);
                    textBox1.Clear();
                    label1.Text = Convert.ToString(a);

                }
                else
                {
                    a = Convert.ToInt32(textBox1.Text);
                    b = Convert.ToInt32(label1.Text);
                    textBox1.Clear();
                    textBox1.Text = Convert.ToString(b * a);
                    label1.Text = "0";
                }
            }

            if (islem == "/")
            {
                if (label1.Text == "0")
                {
                    a = Convert.ToInt32(textBox1.Text);
                    textBox1.Clear();
                    label1.Text = Convert.ToString(a);

                }
                else
                {
                    a = Convert.ToInt32(textBox1.Text);
                    b = Convert.ToInt32(label1.Text);
                    textBox1.Clear();
                    textBox1.Text = Convert.ToString(b / a);
                    label1.Text = "0";
                }

            }

            if (islem == "%")
            {
                int a;
                a = Convert.ToInt32(label1.Text) % Convert.ToInt32(textBox1.Text);
                textBox1.Text = Convert.ToString(a);


            }

        }

        private void button22_Click(object sender, EventArgs e)
        {
            if (Convert.ToDouble(textBox1.Text) > 0)
            {

                textBox1.Text = textBox1.Text.Remove(textBox1.Text.Length - 1);
                if (textBox1.Text.Length == 0)
                {
                    textBox1.Text="0";
                }
            }
        }

        private void button14_Click(object sender, EventArgs e)
        {
            islem = "*";           
            if (label1.Text == "0")
            {
                a = Convert.ToInt32(textBox1.Text);
                textBox1.Clear();
                label1.Text = Convert.ToString(a);

            }
            else
            {
                a = Convert.ToInt32(textBox1.Text);
                b = Convert.ToInt32(label1.Text);
                textBox1.Clear();
                label1.Text = Convert.ToString(b * a);
            }




        }

        private void button21_Click(object sender, EventArgs e)
        {
            islem = "/";
            if (label1.Text == "0")
            {
                a = Convert.ToInt32(textBox1.Text);
                textBox1.Clear();
                label1.Text = Convert.ToString(a);

            }
            else
            {
                a = Convert.ToInt32(textBox1.Text);
                b = Convert.ToInt32(label1.Text);
                textBox1.Clear();
                label1.Text = Convert.ToString(b / a);
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            //this.Location = new Point(0, 0);
            //this.Size = Screen.PrimaryScreen.WorkingArea.Size;
            //Rectangle cC = new Rectangle();
            //cC = Screen.GetBounds(cC);
            //float oW = ((float)cC.Width / (float)sW);
            //float oH = ((float)cC.Height / (float)sH);
            //this.Scale(new Size(Convert.ToInt32(oW), Convert.ToInt32(oH)));
        }

        private void button16_Click(object sender, EventArgs e)
        {
            int a;
            a =Convert.ToInt32( textBox1.Text);
            label1.Text = Convert.ToString(a * a);
            textBox1.Clear();
        }

        private void button17_Click(object sender, EventArgs e)
        {
            int a;
            a = Convert.ToInt32(textBox1.Text);
            textBox1.Text = Convert.ToString(Math.Sqrt(a));
            
            
        }

        private void button15_Click(object sender, EventArgs e)
        {
            double a,b;
            islem = "%";
            a = Convert.ToDouble(textBox1.Text);
            label1.Text =Convert.ToString( a);
            textBox1.Clear();
        
        }

        private void button11_Click(object sender, EventArgs e)
        {
            textBox1.Text = "0";
            label1.Text = "";
        }

        private void button12_Click(object sender, EventArgs e)
        {
            islem = "-";

            if (label1.Text == "0")
            {
                a = Convert.ToInt32(textBox1.Text);                
                textBox1.Clear();
                label1.Text = Convert.ToString(a);

            }
            else
            {
                a = Convert.ToInt32(textBox1.Text);
                b = Convert.ToInt32(label1.Text);
                textBox1.Clear();
                label1.Text = Convert.ToString(b-a);
            }
        }
    }
}
