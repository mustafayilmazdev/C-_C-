using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication12
{
    public partial class Form1 : Form
    {

        Yigin ilk=new Yigin(3);
        int b = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            ilk.yiginEkle(int.Parse(textBox1.Text));
            listBox1.Items.Clear();
            for (int i = 0; i < ilk.elemansayi; i++)                
            {
                b = i;
                listBox1.Items.Add(ilk.elemanDondur(b));              
            }

            b++;

        }

        private void button2_Click(object sender, EventArgs e)
        {
            b = 0;
            ilk.yigindanSil();
            listBox1.Items.Clear();
            for (int i = 0; i < ilk.elemansayi; i++)
            {
                b = i;
                listBox1.Items.Add(ilk.elemanDondur(b));
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
