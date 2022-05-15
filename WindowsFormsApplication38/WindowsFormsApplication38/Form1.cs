using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication38
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string a = "";
            if (radioButton1.Checked == true)
            {

                a += " - Erkek";

            }
            else
            {
                a += " - Kadin";
            }
            for(int i = 0; i < checkedListBox1.CheckedItems.Count; i++)
            {
                a += " - " + checkedListBox1.CheckedItems[i];
            }
            listBox1.Items.Add(textBox1.Text + " - " + textBox2.Text + " - " + comboBox1.Text  +a);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            textBox2.Clear();
            comboBox1.Text = "";
            radioButton1.Checked = false;
            radioButton2.Checked = false; 

            for(int i = 0; i < checkedListBox1.Items.Count; i++) {

                checkedListBox1.SetItemChecked(i, false);
            }
        }   
    }
}
