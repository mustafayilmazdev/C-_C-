/*
ki�i s�n�f� TCKimlikNo,�sim ve adres 


bilgilerine sahip onlup,Adres bilgisi de ayn� zamada bir s�n�ft�r.


Adres s�n�f� il,il�e,mahalle ve a��kadres bilgilerini i�ermektedir.


Ki�i s�n�f� ile Adres s�n�f� aras�nda
kompozit bir ili�ki bulunmakad�r.Bir �al��an ayn� zamanda bir ki�i'dir.Yani �al��an s�n�f� Ki�i s�n�f�ndan
miras al�narak olu�turulmal�d�r.Bir �al��an sgkno,i�yeri, g�rev ve departman bilgilerini i�ermekte olup 
i�yeri de ayn� zamanda bir s�n�ft�r.�al��an ve i�yeri aras�ndaki ili�ki composition'd�r i�yeri s�n�f�
�� bilgiye sahiptir adi,adres,s�n�f� t�r�nde adres bilgisi ve �al��an s�n�f listesi t�r�nde �al��anlar.
�al��anlar listesine s�n�f d���ndan eri�ilememelidir.��yerine �al��an eklemek i�in ayr� bir metot yaz�lmal�d�r.
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