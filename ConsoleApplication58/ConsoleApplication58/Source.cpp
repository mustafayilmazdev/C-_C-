#include<iostream>
using namespace std;
class Matris {
public:
	int a, b;
	int ** dizi;//diziyi saklayacak işaretçi    
	Matris(int r, int c) {
		a = r;
		b = c;
		dizi = new int*[r];//Satır işaretçilerini oluştur
		for (int i = 0; i < r; i++) {
			dizi[i] = new int[c];//Satırları tutan tek boyutlu dizileri oluştur
		}


	}

	void girdiAl() {
		int k;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j<b; j++) {
				cin >> k;
				dizi[i][j] = k;//Satırları tutan tek boyutlu dizileri oluştur
				cout << dizi[i][j] << " ";
			}

		}


	}

	Matris operator+ (const Matris diger) {
		int toplam = 0;
		Matris x(a,b);
		for (int i = 0; i < a; i++) {
			for (int j = 0; j<b; j++) {
				x.dizi[i][j] = dizi[i][j] + diger.dizi[i][j];
			}

		}

		return x;
	}

	friend ostream & operator << (ostream & out, const Matris &m) {

		for (int i = 0; i < a; i++) {
			for (int j = 0; j<b; j++) {

				cout << dizi[i][j] << " ";
			}
			cout << endl;

		}
		return out;
	}

};


int main(int argc, char const *argv[])
{
	int satir, sutun;
	cin >> satir >> sutun;
	Matris a(satir, sutun);
	Matris b(satir, sutun);
	a.girdiAl();

	return 0;
}