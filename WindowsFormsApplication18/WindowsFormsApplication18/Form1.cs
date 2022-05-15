using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication18
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int a = Convert.ToInt32(textBox1.Text);
            if (a == 1 || a == 2 || a == 3)
            {
                listBox1.Items.Add("Gamze seni çok seviyor");
            }
            if (a == 4 || a == 5 || a == 6)
            {
                listBox1.Items.Add("Gamze seni çook seviyor");
            }
            if (a == 7 || a == 8 || a == 9)
            {
                listBox1.Items.Add("Gamze seni çoook seviyor");
            }
            if (a == 10)
            {
                listBox1.Items.Add("Gamze seni çooook seviyor");
            }
        }
    }
}
