#include "pis.h"
int max(int a, int b) {
	return a > b ? a : b;
}

CokTerimli::CokTerimli() {
	sifirCokTerimli();
}
void CokTerimli::sifirCokTerimli() {
	for (int i = 0; i <= Azm_US; i++)
		katSayilar[i] = 0;
	usDerecesi = 0;
}
CokTerimli CokTerimli::operator+(const CokTerimli & st) const {
	CokTerimli sum; sum.usDerecesi = max(usDerecesi, st.usDerecesi);
	for (int i = sum.usDerecesi; i >= 0; i--)
		sum.katSayilar[i] = katSayilar[i] + st.katSayilar[i];
	return sum;
}
CokTerimli CokTerimli::operator*(const CokTerimli & st) const {
	CokTerimli product;
	product.usDerecesi = usDerecesi + st.usDerecesi;
	if (product.usDerecesi > Azm_US)
		cerr << "operator* , Azm_US derecesini geciyor" << endl;
	for (int i = 0; i <= usDerecesi; i++)
		for (int j = 0; j <= st.usDerecesi; j++)
			product.katSayilar[i + j] += katSayilar[i] * st.katSayilar[j];
	return product;
}
/*ostream & operator<<(ostream & sonuc, const CokTerimli & st) {
	st.goster(sonuc);
	return sonuc;
}*/
void CokTerimli::goster() const {
	for (int i = usDerecesi; i > 0; i--)
		cout << katSayilar[i] << "x^" << i << " + ";
	cout << katSayilar[0] << endl;
}