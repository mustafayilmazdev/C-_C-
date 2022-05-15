using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication48
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int deger = Convert.ToInt32( textBox1.Text);
            recursive(deger);
        }

        int recursive(int d)
        {
            if (d< 1)
                {
                    return 1;
                }

            listBox1.Items.Add((d*d).ToString());
            return recursive(d-1);
            

        }
    }
}
