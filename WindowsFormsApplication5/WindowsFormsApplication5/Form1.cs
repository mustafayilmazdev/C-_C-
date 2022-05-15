using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace WindowsFormsApplication5
{
    public partial class Form1 : Form
    {
     

        public Form1()
        {
            InitializeComponent();
        }
        int a = 0;
        Kuyruk ilk = new Kuyruk(3);

        private void button1_Click(object sender, EventArgs e)
        {
            if (ilk.ElemanAdet() == ilk.maxDegeriDondur()-1) {
                button1.Enabled = false;
            }            
            ilk.KuyrukEkle(double.Parse(textBox1.Text));
            listBox1.Items.Add(ilk.ElemanDegerleri(a++));

        }

        private void button2_Click(object sender, EventArgs e)
        {

            ilk.KuyruktanSil();
            kuyruklistele();
            
        }
        void kuyruklistele()
        {
            listBox1.Items.Clear();
            for (int i = 0; i < ilk.maxDegeriDondur(); i++)
            {
                listBox1.Items.Add(ilk.ElemanDegerleri(i));
            }

        }
        void kuyrukSırala()
        {
            double a;
       //     a=ilk.ElemanDegerleri();
            
        }
    }
}
