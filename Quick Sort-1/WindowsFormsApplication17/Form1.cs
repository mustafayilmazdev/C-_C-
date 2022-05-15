using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication17
{
    public partial class Form1 : Form
    {

        int[] dizi = new int[5];// DİZİ TANIMI VE BOYUTU YANİ 5 ADET SAYI ALACAK İSTEDİĞİMİZ KADAR AYARLAYABİLİRİZ
        int b = 0;// DİZİNİN İNDİSİNİ SAYMAK İÇİN 0,1,2,3,4 İNDİS -> AŞAĞIDA ARTIRACAĞIZ
        int sayac = 5;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            dizi[b] =Convert.ToInt32( textBox1.Text);//TEXTBOX VS ALDIĞIMIZ TÜM VERİLER STRİNGTİR SAYISAL DEĞERE DÖNÜŞTÜRMEK İÇİN CONVERT KULLANIYORUZ
            listBox1.Items.Add(dizi[b]);//GİRDİ ALDIĞIMIZ DEĞERİ LİSTBOX'TA GÖSTERİYORUZ 
            b++;// İNDİS DEĞERİMİZİ BİR İLERİ GÖTÜRÜYORUZ GERİ GELDİĞİNDE BİR SONRAKİ DEĞERE VERİ GİRİLMESİ İÇİN
            sayac--;
            label2.Text = Convert.ToString(sayac);
            if (sayac == 0)
            {
                button1.Enabled = false;
                button2.Enabled = true;
            }
            textBox1.Clear(); //Textbox1 temizle
            textBox1.Focus(); //İmleç Textbox1 içerisinde
        }

        private void button2_Click(object sender, EventArgs e)
        {
            QuickSort(dizi, 0, 4);
            yazdir(dizi);
        }


        public void QuickSort(int[] dizi, int baslangic, int bitis)
        {
            int i;
            if (baslangic < bitis)
            {
                i = partition(dizi, baslangic, bitis);
                QuickSort(dizi, baslangic, i-1);
                QuickSort(dizi, i + 1, bitis);
            }
        }
        public int partition(int[] A, int baslangic, int bitis)
        {
            int gecici;
            int x = A[bitis];
            int i = baslangic -1;
            for (int j = baslangic; j <= bitis-1; j++)
            {
                if (A[j] <= x)
                {
                    i++;
                    gecici = A[i];
                    A[i] = A[j];
                    A[j] = gecici;
                }
            }
            gecici = A[i + 1];
            A[i + 1] = A[bitis];
            A[bitis] = gecici;
            return i + 1;
        }
        void yazdir(int[] dizi)
        {
            listBox1.Items.Clear();
            for (int i = 0; i < 5; i++)
            {
                listBox1.Items.Add(dizi[i]);
            }

        }

    }
}
