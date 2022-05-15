using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ediVeBudu
{
    public partial class Form1 : Form
    {

        string[] medyalar = {"Dark","Emily in Paris","Atiye","Stranger Things","Who Killed Sara","Lupin","Elite","Lucifer","You"};

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            for (int i = 0; i < medyalar.Length; i++) {

                listBox1.Items.Add(medyalar[i]);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Random randomDiziSec = new Random();
            int sayi = randomDiziSec.Next(medyalar.Length);
            secilenDiziAlani.Text = medyalar[sayi];
        }
    }
}
