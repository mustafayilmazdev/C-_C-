using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication33
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            textBox2.Clear();
            comboBox1.Text = " ";
            radioButton1.Checked = false;
            radioButton2.Checked = false;
            radioButton3.Checked = false;
            radioButton4.Checked = false;

            for (int i = 0; i < checkedListBox1.Items.Count; i++)
            {
                checkedListBox1.SetItemChecked(i, false);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string sonuc = "";

            sonuc += textBox1.Text + " " + textBox2.Text + " " + comboBox1.Text + " ";
            if (radioButton1.Checked == true)
            {
                sonuc += "Erkek ";
            }
             if (radioButton2.Checked==true)
            {
                sonuc += "Kadin ";
            }
            if(radioButton3.Checked==true)
            {
                sonuc += "Uzaktan ";

            }
             if (radioButton4.Checked == true)
            {
                sonuc += "Yuz yuze ";

            }
            for (int i = 0; i < checkedListBox1.CheckedItems .Count; i++)
            {
                sonuc+=" "+checkedListBox1.CheckedItems[i].ToString();
            }

            listBox1.Items.Add(sonuc);
            sonuc = "";
        }
    }
}
