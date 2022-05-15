/*
kiþi sýnýfý TCKimlikNo,Ýsim ve adres 


bilgilerine sahip onlup,Adres bilgisi de ayný zamada bir sýnýftýr.


Adres sýnýfý il,ilçe,mahalle ve açýkadres bilgilerini içermektedir.


Kiþi sýnýfý ile Adres sýnýfý arasýnda
kompozit bir iliþki bulunmakadýr.Bir çalýþan ayný zamanda bir kiþi'dir.Yani çalýþan sýnýfý Kiþi sýnýfýndan
miras alýnarak oluþturulmalýdýr.Bir çalýþan sgkno,iþyeri, görev ve departman bilgilerini içermekte olup 
iþyeri de ayný zamanda bir sýnýftýr.Çalýþan ve iþyeri arasýndaki iliþki composition'dýr iþyeri sýnýfý
üç bilgiye sahiptir adi,adres,sýnýfý türünde adres bilgisi ve çalýþan sýnýf listesi türünde çalýþanlar.
çalýþanlar listesine sýnýf dýþýndan eriþilememelidir.Ýþyerine çalýþan eklemek için ayrý bir metot yazýlmalýdýr.
*/
#ifndef IS_H
#define IS_H
#include <iostream>
#include <string>
using namespace std;
class adres{		
	friend ostream & operator <<(ostream &, adres &);
public:
	string il, ilce, mahalle, acikAdres;		
};
ostream & operator <<(ostream & m, adres&y) {
	cout << "olcan mi aq" << endl;
	return m;
}
class kisi{
public:
	int TCkimlikNo;
	string isim;
	adres adres;
	kisi();

};

class calisanList {
public:
	adres y;
	string ad;
	int tc;
	calisanList(kisi &x) {		
		ad = x.isim;
		tc = x.TCkimlikNo;
		y = x.adres;

	}
};

class isyeri {
public:
	string ad;
	adres x;
	
};


class calisan :public kisi
{
	void calisanl(){
		cout << isim << " " << adres << " " << endl;
	
	
	}
public:
	calisan();
	int sgkNo;
	string gorev, departman;

	int calisanEkle() {

		cout << "Yeni Calisanin adini ve gorevini giriniz: ";
		cin >> isim >> gorev;

	}


};



#endif //IS_H