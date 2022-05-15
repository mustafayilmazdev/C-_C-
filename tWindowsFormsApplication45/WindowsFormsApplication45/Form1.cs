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
namespace WindowsFormsApplication45
{
    public partial class Form1 : Form
    {
        int id = 1;
        ArrayList urunler = new ArrayList();
        ArrayList imei = new ArrayList();
        ArrayList seri = new ArrayList();
        int imeiSerikontrol = 0;
        public Form1()
        {
            InitializeComponent();
        }


        public void lblDuzenle(double satisFiyati,double oran,double kar)
        {
           
            
            lblBakiye.Text = (satisFiyati + Convert.ToDouble(lblBakiye.Text)).ToString(); //Label'daki bakiye değerini Güncelleme
          
            lblToplamKarDeger.Text = (kar + Convert.ToDouble(lblToplamKarDeger.Text)).ToString();//Labeldaki kar değerini Güncelleme
           // lblStokKardDeger.Text = (Convert.ToDouble( lblStokDeger.Text) - 40000).ToString();
            MessageBox.Show("Telefon %" + oran*100 + " kar ile " + satisFiyati + " TL'ye Satıldı"); //Sistem Bilgilendirme Mesajı
            lblToplamSatisDeger.Text = (Convert.ToDouble(lblToplamSatisDeger.Text) + 1).ToString(); // Label Toplam Satış adedi Güncelleme
           
        }

        private void button2_Click(object sender, EventArgs e)
        {
           
            
            int k = listBoxAlinan.SelectedIndex;             // listbox1 de tıklanan ürünün indexini veren satır
            string a = urunler[k].ToString();           //k indeksine  ürünler dizisinde karşılık gelen ürünü string parçalama yapmak için bir string değişkene atama 
            string [] b = a.Split(' ');   //gelen stringi boşluğa göre parçalayıp bir dizi oluşturma Mustafa Yılmaz stringini b[0]="Mustafa", b[1]="Yılmaz" şeklinde parçalar
            int bayrak = 0;   //chart1 için Ürün Markası kontrol Bayrağı
            string alisTarihi=" ";




            //int say = 0;
            //foreach (string item in b)
            //{
            //    MessageBox.Show(item + " " + say.ToString());
            //    say++;
            //}

            
            double fiyat = Convert.ToDouble(b[6]); // parçalanan stringden fiyat değeri çıkartılıyor       
            alisTarihi+= b[7] + " " + b[8] + " " + b[9]+" "+ b[10];            
            double satisFiyati=0; // satış fiyatı için bir değişken tanımlanıyor
            double kar = 0,oran=0;
            if (rd10.Checked==true) { // radio butonlar yardımıyla %kaç karlı fiyatla satılmak isteniyor öğreniliyor
                
                oran = 0.10;
                
                satisFiyati =fiyat+ (fiyat * 0.10); // satış fiyatı hesaplama
                
                kar = (fiyat * 0.10);                
               
                lblDuzenle(satisFiyati, oran, kar);
               


            }
           else if (rd15.Checked == true)
            {
                oran = 0.15;
                satisFiyati = fiyat + (fiyat * oran);
                kar = (fiyat * oran);

                lblDuzenle(satisFiyati, oran, kar);

            }
            else if (rd20.Checked == true)
            {
                oran = 0.20;
                satisFiyati = fiyat + (fiyat * 0.20);
                kar = (fiyat * 0.20);

                lblDuzenle(satisFiyati, oran, kar);

            }
            else if (rd25.Checked == true)
            {
               

                satisFiyati = fiyat + (fiyat * 0.25);
                kar = (fiyat * 0.25);
                oran = 0.25;

                lblDuzenle(satisFiyati, oran, kar);

            }
            else
            {
             
                satisFiyati = fiyat + (fiyat *  (Convert.ToDouble(numericUpDown1.Value)/100));
                kar = (fiyat * (Convert.ToDouble(numericUpDown1.Value) / 100));
                oran =Convert.ToDouble( numericUpDown1.Value)/100;
                lblDuzenle(satisFiyati, oran, kar);




            }
            lblUrunMaliyetDeger.Text = (fiyat + Convert.ToDouble(lblUrunMaliyetDeger.Text)).ToString();
            lblStokDeger.Text = (Convert.ToDouble(lblStokDeger.Text) - fiyat).ToString();
            for (int i = 0; i < chart1.Series.Count; i++)
            {
                //   MessageBox.Show("Series-"+b[1] + "  -- " + chart1.Series[i].ToString());
                if ("Series-" + b[1] == chart1.Series[i].ToString()) // chart1 serisinde aynı adda bir marka var mı kontrol ediyor
                {

                   
                    this.chart1.Series[b[1]].Points[0].YValues[0] += 1;  //chart1 serilerinden ada göre Y değerini 1 arttırıyor örneğin Apple markası Y değeri +1
                    double deger = this.chart1.Series[b[1]].Points[0].YValues[0];//arttırılan değeri bir değişkene atıyor
                    chart1.Series[b[1]].Points.Clear();  //chart1 temizleniyor
                    this.chart1.Series[b[1]].Points.AddXY("Satış", deger);  //Serilerden ada göre chart1'e x değerine satış y değerine toplanan değer ekleniyor
                    this.chrtKar.Series[b[1]].Points[0].YValues[0] +=satisFiyati;
                    deger= this.chrtKar.Series[b[1]].Points[0].YValues[0];
                    chrtKar.Series[b[1]].Points.Clear();
                    this.chrtKar.Series[b[1]].Points.AddXY("Kar", deger);
                    grafikYazdir(b[1]);
                    bayrak = 1; // bayrak 1 yapılıyor çünkü bu marka daha önce eklenmiş
                }
            }

            if (bayrak != 1) //bayrak kontrolü
            {
                //MessageBox.Show("Bayrak0");
                chart1.Series.Add(b[1]); // bu marka daha önce eklenmemiş serilere Marka Adı ekleniyor
                chrtKar.Series.Add(b[1]);
                this.chart1.Series[b[1]].Points.AddXY("Satış", 1); // x değerine satış y değerine ilk defa satış yapıldığı için 1 ekleniyor
                this.chrtKar.Series[b[1]].Points.AddXY("Kar", satisFiyati);
                grafikYazdir( b[1]);
                //MessageBox.Show("3");
                bayrak = 0; // bayrak indiriliyor. İndirilmezse Eklenmemiş bir marka için kayıt yapmaz
            }



            //MessageBox.Show("9");
            urunler[k] = " "; // Satış listbox'ı için k boş duruma getiriliyor
            for(int i = 0; i < 6; i++) {
                urunler[k] += b[i] + " ";                    //Burada k indeksine Tarihe kadar olan kısım kopyalanıyor
            }
            urunler[k] += fiyat.ToString() + " ";
            urunler[k] += satisFiyati.ToString()+" ";
            urunler[k] += alisTarihi+" ";
            DateTime dt = DateTime.Now; // Satış gününün tarihi alınıyor
            urunler[k] += dt.ToString("dd MMMM yyyy dddd"); // gün ay yıl HaftaGünü formatında k indeksine ekleniyor
            listBoxSatilan.Items.Add(urunler[k]); //satış tarihli ürün Satış Listbox'ına ekleniyor
           // imei.RemoveAt(k);
           // seri.RemoveAt(k);
            urunler.RemoveAt(k); // ürün Stok Ürünlerin Listbox'ından kaldırılıyor
            //MessageBox.Show("10");
            listele(); //Stok ürünleri için güncelleme yapılıyor
            button2.Enabled = false; // button2 kapatılıyor çünkü index seçmeden bu butona tıklanması hataya yol açar
            rd10.Checked = false;
            rd15.Checked = false;
            rd20.Checked = false;
            rd25.Checked = false;
            numericUpDown1.Value = 0;
        }

        

        private void Form1_Load(object sender, EventArgs e)
        {
            //Başlangıç ürünlerimiz Atanıyor ve listeleniyor
            urunler.Add(id + " " + "Apple" + " " + "Iphone8" + " " + "1" + " " + "2" + " " + "128" + " " + 6000 + " " + "20 12 2016 Pazartesi");
            imei.Add(1);
            seri.Add(2);
            id++;
            urunler.Add(id + " " + "Apple" + " " + "IphoneX" + " " + "3" + " " + "4" + " " + "128" + " " + 7000 + " " + "20 12 2017 Salı");
            imei.Add(3);
            seri.Add(4);
            id++;
            urunler.Add(id + " " + "Apple" + " " + "Iphone11" + " " + "5" + " " + "6" + " " + "128" + " " + 8000 + " " + "20 12 2018 Çarşamba");
            imei.Add(5);
            seri.Add(6);
            id++;
            urunler.Add(id + " " + "Apple" + " " + "Iphone11pro" + " " + "7" + " " + "8" + " " + "128" + " " + 9000 + " " + "20 12 2019 Perşembe");
            imei.Add(7);
            seri.Add(8);
            id++;
            urunler.Add(id + " " + "Apple" + " " + "Iphone12" + " " + "9" + " " + "10" + " " + "128" + " " + 10000 + " " + "20 12 2020 Cuma");
            imei.Add(9);
            seri.Add(10);
            id++;
            //Stoktaki ürünler chart'lara kaydediliyor
            this.chart1.Series[0].Points.AddXY("Satış", 0); 
            this.chrtKar.Series[0].Points.AddXY("Kar", 0);
            
            listele();
        }


        public void grafikYazdir(string marka)
        {
         //   MessageBox.Show(this. chrtKar .Series[marka].Points[0].YValues[0].ToString());
            listBox1.Items.Clear();
            for(int i = 0; i < chrtKar.Series.Count; i++)
            {
               listBox1.Items.Add(chrtKar.Series[i]+": "+ this.chrtKar.Series[i].Points[0].YValues[0].ToString()+" TL");
            }
        }

        public void listele()
        {
            listBoxAlinan.Items.Clear(); //listbox'taki değerler tekrarlanmasın diye temizleniyor
            for(int i = 0; i < urunler.Count; i++)
            {
                listBoxAlinan.Items.Add(urunler[i]); // Stok ürünleri Listbox'ına ürünler ekleniyor
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            DateTime kontrol = DateTime.Now;
            if (dateTimePicker1.Value <= kontrol) { 

            if (Convert.ToDouble( txtAlisFiyati.Text) <= Convert.ToDouble( lblBakiye.Text) && Convert.ToDouble(txtAlisFiyati.Text)!=0) { // Alış için yeterli Bakiye var mı kontrol ediliyor
                                                                                                                                         //urun ekleniyor

                  if(boslukSorgula(mtxtImei.Text)) {
                        if (boslukSorgula(mtxtSeri.Text)) { 
                    

                    if (imeiSorgula(Convert.ToInt32(mtxtImei.Text))) {
                    if (seriSorgula(Convert.ToInt32(mtxtSeri.Text))) {
                        urunler.Add(id + " " + txtMarka.Text + " " + txtModel.Text + " " + mtxtImei.Text + " " + mtxtSeri.Text + " " + cmbHafiza.Text + " " + txtAlisFiyati.Text + " " + dateTimePicker1.Text);
                        imei.Add(mtxtImei.Text);
                        seri.Add(mtxtSeri.Text);
                double yeniBakiye;                   
                if(Convert.ToDouble( lblBakiye.Text) -Convert.ToDouble(txtAlisFiyati.Text) <= Convert.ToDouble(lblToplamKarDeger.Text))
                {
                    yeniBakiye = Convert.ToDouble(lblBakiye.Text) - Convert.ToDouble(txtAlisFiyati.Text); //bakiye güncellemesi bakiye-alış fiyatı
                    lblBakiye.Text = yeniBakiye.ToString();
                    lblToplamKarDeger.Text = yeniBakiye.ToString();
                }
                else
                {

                    yeniBakiye = Convert.ToDouble(lblBakiye.Text) - Convert.ToDouble(txtAlisFiyati.Text); //bakiye güncellemesi bakiye-alış fiyatı
                    lblBakiye.Text = yeniBakiye.ToString();

                }
                lblStokDeger.Text = (Convert.ToDouble(lblStokDeger.Text) + Convert.ToDouble(txtAlisFiyati.Text)).ToString();
                listele();
                            txtMarka.Clear();
                            txtModel.Clear();
                            mtxtImei.Clear();
                            mtxtSeri.Clear();
                            cmbHafiza.Text=" ";
                            txtAlisFiyati.Clear();
                            id++;
            MessageBox.Show("Telefon Alındı...");// bilgilendirme mesajı
                    }
                    else
                    {
                        MessageBox.Show("Seri numarası başka bir telefona kayıtlı");
                    }
                    
                }
                else
                {
                    MessageBox.Show("IMEI numarası başka bir telefona kayıtlı");
                }

            }
            else { MessageBox.Show("Yeterli Bakiye Yok!"); //Uyarı mesajı
            }

        }
                }
            }

            else
            {
                MessageBox.Show("Ürünü alım tarihi bugünden ileri bir tarih olamaz.!!");
            }
        }
       
       
        public bool boslukSorgula(string text)

        {
            for(int i = 0; i < text.Length; i++)
            {
                if(text[i]==' ')
                {
                    MessageBox.Show("Imei veya Seri numarasında boşluk var!");
                    return false;
                }

            }
            return true;
        }

        public bool imeiSorgula(int degerImei)
        {
            for(int i = 0; i < imei.Count; i++)
            {
                if (degerImei ==Convert.ToDouble( imei[i]) ) {
                    return false;
                }
            }
            return true;
        }

        public bool seriSorgula(int degerSeri)
        {
            for (int i = 0; i < seri.Count; i++)
            {
                if (degerSeri == Convert.ToDouble(seri[i]))
                {
                    return false;
                }
            }
            return true;
        }

        private void tabPage2_Click(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            mtxtImei.Enabled = true;
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            txtModel.Enabled = true;
                
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {
            mtxtSeri.Enabled = true;
        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {
            cmbHafiza.Enabled = true;
        }


        private void textBox7_TextChanged(object sender, EventArgs e)
        {
            button1.Enabled = true;
        }

        private void mtxtImei_TextChanged(object sender, EventArgs e)
        {
            mtxtSeri.Enabled = true;
        }

        private void mtxtSeri_TextChanged(object sender, EventArgs e)
        {
            cmbHafiza.Enabled = true;
        }

      

        private void listBoxAlinan_SelectedIndexChanged(object sender, EventArgs e)
        {
            button2.Enabled = true;

        }

        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {
            rd10.Checked = false;
            rd15.Checked = false;
            rd20.Checked = false;
            rd25.Checked = false;
        }

        private void rd25_CheckedChanged(object sender, EventArgs e)
        {
            if (rd25.Checked == true)
            {
                numericUpDown1.Value = 0;
            }
        }

        private void rd10_CheckedChanged(object sender, EventArgs e)
        {
            if (rd10.Checked== true){
                numericUpDown1.Value = 0;
            }
        }

        private void rd15_CheckedChanged(object sender, EventArgs e)
        {
            if (rd15.Checked == true)
            {
                numericUpDown1.Value = 0;
            }
        }

        private void rd20_CheckedChanged(object sender, EventArgs e)
        {
            if (rd20.Checked == true)
            {
                numericUpDown1.Value = 0;
            }
        }


        private void cmbHafiza_SelectedIndexChanged(object sender, EventArgs e)
        {


            txtAlisFiyati.Enabled = true;

        }


        private void mtxtImei_MouseClick(object sender, MouseEventArgs e)
        {
            if (imeiSerikontrol != 1) {

                MessageBox.Show("Lütfen Imei ve Seri numarası girerken soldan boşluk bırakmayın...!!","Dikkat");

                imeiSerikontrol = 1;

            }

        }

    }

}
