using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication32
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked == true)
            {
                numericUpDown1.Enabled = true;
            }
            if (checkBox1.Checked == false)
            {

                numericUpDown1.Value = 0;
                numericUpDown1.Enabled = false;
            }
        }

        private void checkBox3_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox3.Checked == true)
            {
                numericUpDown2.Enabled = true;
            }
            if (checkBox3.Checked == false)
            {
                numericUpDown2.Value = 0;
                numericUpDown2.Enabled = false;
            }
        }

        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox2.Checked == true)
            {
                numericUpDown3.Enabled = true;
            }
            if (checkBox2.Checked == false)
            {
                numericUpDown3.Value = 0;
                numericUpDown3.Enabled = false;
            }
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton1.Checked == true)
            {
                numericUpDown4.Enabled = true;
            }
            if (radioButton1.Checked == false)
            {
                numericUpDown4.Value = 0;
                numericUpDown4.Enabled = false;
            }
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton2.Checked == true)
            {
                numericUpDown5.Enabled = true;
            }
            if (radioButton2.Checked == false)
            {
                numericUpDown5.Value = 0;
                numericUpDown5.Enabled = false;
            }
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton3.Checked == true)
            {
                numericUpDown6.Enabled = true;
            }
            if (radioButton3.Checked == false)
            {
                numericUpDown6.Value = 0;
                numericUpDown6.Enabled = false;
            }
        }
    }
}
