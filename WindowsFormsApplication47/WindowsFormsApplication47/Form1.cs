using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Collections;
namespace WindowsFormsApplication47
{
    public partial class Form1 : Form
    {

        ArrayList a = new ArrayList();
        
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            a.Add(222);

            int b;
            b =Convert.ToInt32( a[0]);
            MessageBox.Show(b.ToString());

        }
    }
}
