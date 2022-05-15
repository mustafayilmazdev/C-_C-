using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace doublyLinkedList
{
    public partial class Form1 : Form
    {
        Graphics cizim;
        static int a = 20;
        int s = 0;
        int k = 0;
        int fl = 0;
        int [] dizi = new int[100];
        Point basnoktasi, bitnoktasi;
        LinkedList listem = new LinkedList();
        LinkedList yedekListem = new LinkedList();
      
        Random rastgele = new Random();        

        class Dugum
        {
            public int value;
            public Dugum next;
            public Dugum prev;
            public Dugum(int s)
            {
                value = s;
            }
        };

        class LinkedList
        {
            public Dugum head;
           
            public LinkedList()
            {
                head = null;
            }
            public Dugum ekle(int sayi)
            {
                Dugum link = new Dugum(sayi);
                link.next = head;
                if (head != null)
                {
                    head.prev = link;
                    }
                head = link;
                return link;
            }
            public void arayaEkle(Dugum link,int a)
            {
                int h = 0;
                
                while (head.next != null)
                {
                    
                    if (head.value == a)
                    {
                        link.next = head;
                        link.prev = head.prev;
                        head.prev = link;
                        h = 1;         
                    }
                    
                    
                    head = head.next;
                    
                }
                if (head.value == a)
                {
                    link.next = head;
                    link.prev = head.prev;
                    head.prev = link;
                    h = 1;
                }
                if (h != 1)
                {
                    MessageBox.Show("Girilen Dugum Listede Olmalidir! Program Sonlandırılacak...", "Uyarı");
                    Environment.Exit(0);
                }             



            }
           
        };
      

        public Form1()
        {
            InitializeComponent();
            listem.head = null;

        }
        public void listeOlustur()
        {
            int sayi = rastgele.Next(1000);
            listem.ekle(sayi);
            

        }
      
        private void button1_Click(object sender, EventArgs e)
        {
            fl = 1;

            while (k < Convert.ToInt32(textBox1.Text))
            {
                listeOlustur();
                nodeCiz();
                k++;
            }
            button1.Enabled = false;
            button2.Enabled = true;
        }

        public void nodeCiz()
        {
            if (fl == 1) { 
            Font myFont = new Font("Arial", 12);
            Pen kalem = new Pen(Color.Blue, 5);
            cizim = pictureBox1.CreateGraphics();
            cizim.DrawEllipse(kalem, a+50,0 ,70,50);
            cizim.DrawString(listem.head.value.ToString(), myFont, Brushes.Green, new Point(a+70, 15));
            s++;
            cizgiCiz();           
            a += 100;
            }
            else
            {
            a = 0;
                s = 0;
            for(int i = 0; i < Convert.ToInt32(textBox1.Text)+1; i++) {
                
            Font myFont = new Font("Arial", 12);
            Pen kalem = new Pen(Color.Blue, 5);
            cizim = pictureBox2.CreateGraphics();
            cizim.DrawEllipse(kalem, a + 70, 0, 70, 50);
            cizim.DrawString(listem.head.value.ToString(), myFont, Brushes.Green, new Point(a + 95, 15));
            s++;
            cizgiCiz();
            a += 100;
                    listem.head = listem.head.prev;
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Dugum ara = new Dugum(Convert.ToInt32(textBox2.Text));
            listem.arayaEkle(ara, Convert.ToInt32(textBox3.Text));
            fl = 0;            
            nodeCiz();
            button2.Enabled = false;
        }

        public void cizgiCiz()
        {
            if (fl == 1) { 
            if(s== Convert.ToInt32(textBox1.Text) )
            {
                Font myFont = new Font("Arial", 12);
                basnoktasi = new Point(20, 30);
                bitnoktasi = new Point(70, 30);
                Pen kalem = new Pen(Color.Magenta, 4);
                cizim = pictureBox1.CreateGraphics();
                cizim.DrawLine(kalem, basnoktasi, bitnoktasi);
                cizim.DrawString("NULL", myFont, Brushes.Green, new Point(25, 50));
                basnoktasi = new Point(a+120, 30);
                bitnoktasi = new Point(a+170, 30);
                cizim.DrawLine(kalem, basnoktasi, bitnoktasi);
                cizim.DrawString("NULL", myFont, Brushes.Green, new Point(a+125, 50));
            
                cizim.Dispose();
            }
             else if (Convert.ToInt32(textBox1.Text) != 1)
            {
                basnoktasi = new Point(a + 110, 7);
                bitnoktasi = new Point(a + 157, 7);
                Pen kalem = new Pen(Color.Magenta, 4);
                cizim = pictureBox1.CreateGraphics();
                cizim.DrawLine(kalem, basnoktasi, bitnoktasi);
                cizim.Dispose();
                basnoktasi = new Point(a + 110, 40);
                bitnoktasi = new Point(a + 155, 40);
                Pen kalem2 = new Pen(Color.Magenta, 4);
                cizim = pictureBox1.CreateGraphics();
                cizim.DrawLine(kalem2, basnoktasi, bitnoktasi);
                cizim.Dispose();
            }
            else if(Convert.ToInt32(textBox1.Text) == 1)
            {
                Font myFont = new Font("Arial", 12);
                basnoktasi = new Point(20, 30);
                bitnoktasi = new Point(70, 30);
                Pen kalem = new Pen(Color.Magenta, 4);
                cizim = pictureBox1.CreateGraphics();
                cizim.DrawLine(kalem, basnoktasi, bitnoktasi);
                cizim.DrawString("NULL", myFont, Brushes.Green, new Point(25,50));
                cizim.Dispose();
            }
            }
            else
            {
                if (s == Convert.ToInt32(textBox1.Text)+1)
                {
                    Font myFont = new Font("Arial", 12);
                    basnoktasi = new Point(20, 30);
                    bitnoktasi = new Point(70, 30);
                    Pen kalem = new Pen(Color.Magenta, 4);
                    cizim = pictureBox2.CreateGraphics();
                    cizim.DrawLine(kalem, basnoktasi, bitnoktasi);
                    cizim.DrawString("NULL", myFont, Brushes.Green, new Point(25, 50));
                    basnoktasi = new Point(a + 140, 30);
                    bitnoktasi = new Point(a + 190, 30);
                    cizim.DrawLine(kalem, basnoktasi, bitnoktasi);
                    cizim.DrawString("NULL", myFont, Brushes.Green, new Point(a + 125, 50));

                    cizim.Dispose();
                }
               else  
                {
                    basnoktasi = new Point(a + 130, 7);
                    bitnoktasi = new Point(a + 177, 7);
                    Pen kalem = new Pen(Color.Magenta, 4);
                    cizim = pictureBox2.CreateGraphics();
                    cizim.DrawLine(kalem, basnoktasi, bitnoktasi);
                    cizim.Dispose();
                    basnoktasi = new Point(a + 130, 40);
                    bitnoktasi = new Point(a + 175, 40);
                    Pen kalem2 = new Pen(Color.Magenta, 4);
                    cizim = pictureBox2.CreateGraphics();
                    cizim.DrawLine(kalem2, basnoktasi, bitnoktasi);
                    cizim.Dispose();
                }
                

            }

        }
    
    }
}
