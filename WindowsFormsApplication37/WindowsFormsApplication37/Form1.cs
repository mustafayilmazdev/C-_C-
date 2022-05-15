using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication37
{
    public partial class Form1 : Form
    {
        double toplam = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
            if (checkBox1.Checked==true)
            {
               toplam+=Convert.ToDouble(numericUpDown1.Value) * 7.50;
                listBox1.Items.Add("Tost " + numericUpDown1.Value.ToString() + " adet");
            }

            if (checkBox2.Checked == true)
            {
                toplam += Convert.ToDouble(numericUpDown2.Value) * 12.50;
                listBox1.Items.Add("Tavuk " + numericUpDown2.Value.ToString() + " adet");
            }
            if (checkBox3.Checked == true)
            {
                toplam += Convert.ToDouble(numericUpDown3.Value) * 25.0;
                listBox1.Items.Add("Waffle " + numericUpDown3.Value.ToString() + " adet");
            }

            if (radioButton1.Checked == true)
            {
                toplam += Convert.ToDouble(numericUpDown6.Value) * 1.5;
                listBox1.Items.Add("Cay " + numericUpDown6.Value.ToString() + " adet");
            }
            if (radioButton2.Checked == true)
            {
                toplam += Convert.ToDouble(numericUpDown5.Value) * 4;
                listBox1.Items.Add("Kola " + numericUpDown5.Value.ToString() + " adet");
            }
            if (radioButton3.Checked == true)
            {
                toplam += Convert.ToDouble(numericUpDown4.Value) * 2;
                listBox1.Items.Add("Ayran " + numericUpDown4.Value.ToString() + " adet");
            }

            listBox1.Items.Add("Toplam tutar: "+toplam);
            toplam = 0;
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked == true)
            {
                numericUpDown1.Enabled = true;
            }
            else
            {
                numericUpDown1.Value = 0;
                numericUpDown1.Enabled = false;
            }
        }

        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox2.Checked == true)
            {
                numericUpDown2.Enabled = true;
            }
            else
            {
                numericUpDown2.Value = 0;
                numericUpDown2.Enabled = false;
            }
        }

        private void checkBox3_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox3.Checked == true)
            {
                numericUpDown3.Enabled = true;
            }
            else
            {
                numericUpDown3.Value = 0;
                numericUpDown3.Enabled = false;
            }
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton1.Checked == true)
            {
                numericUpDown6.Enabled = true;
            }
            else
            {
                numericUpDown6.Value = 0;
                numericUpDown6.Enabled = false;
            }
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton2.Checked == true)
            {
                numericUpDown5.Enabled = true;
            }
            else
            {
                numericUpDown5.Value = 0;
                numericUpDown5.Enabled = false;
            }
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton3.Checked == true)
            {
                numericUpDown4.Enabled = true;
            }
            else
            {
                numericUpDown4.Value = 0;
                numericUpDown4.Enabled = false;
            }
        }
    }
}
