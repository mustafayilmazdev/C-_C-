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
namespace WindowsFormsApplication44
{
    public partial class Form1 : Form
    {
        int id=1;
        ArrayList a = new ArrayList();
        ArrayList b = new ArrayList();
        public Form1()
        {
            InitializeComponent();
           
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //listBox1.Items.Add(id.ToString()+"      "+textBox1.Text+"       " +textBox2.Text);
            comboBox1.Items.Add(id.ToString());
            a.Add(textBox1.Text+" "+textBox2.Text);
            b.Add(id);
            listBox1.Items.Add(b[id-1]+" "+a[id - 1]);
            id++;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int i = 0;          
            while (true)
            {
                if (comboBox1.Text == b[i].ToString())
                {
                    
                    listBox2.Items.Add(a[i]);
                    break;
                }
               
                i++;
                
            }
        }
    }
}
