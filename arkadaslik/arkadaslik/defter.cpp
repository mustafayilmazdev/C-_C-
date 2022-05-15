#include "defter.h"

defter::defter(string bt,const int bs,string bnotu){
	tur = bt;
	notlar = bnotu;
	sayfa = bs;

	cout << tur << " turunde " << sayfa << " sayfali " << notlar << " notlu defter olusturuldu" << endl;

}