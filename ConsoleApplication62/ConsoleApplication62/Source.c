#include<stdio.h>
#include<stdlib.h>
#include <time.h>
struct urunler
{
	char *urun_Adi;
	char kategori[50];
	int barkod;
	int birimFiyat;
};
int p = 0;
void tarayici() {
	FILE *fp;
	fp = fopen("barkod.txt", "r");	
	if (fp != NULL) {
		p = 0;
		printf("\n##################### Urun Listesi #####################\n");

		struct urunler girdi;
		girdi.urun_Adi = (char *)malloc(sizeof(char) * 50);

		while (!feof(fp)) {
			fscanf(fp, "%d %s %s %d \n", &girdi.barkod, girdi.urun_Adi, girdi.kategori, &girdi.birimFiyat);
			printf("%d %s %s %d\n", girdi.barkod, girdi.urun_Adi, girdi.kategori, girdi.birimFiyat);
		}
		fclose(fp);
		printf("#######################################################\n\n");
	}
	else {
		printf("Listelenecek urun bulunamadi...\n");
		p = 1;
	}
}
void yazici(struct urunler yd, int toplamucret, time_t d) {
	FILE *dosya = fopen("fatura.txt", "a");
	fprintf(dosya, "%d %s %s %d %d %s \n", yd.barkod, yd.urun_Adi, yd.kategori, yd.birimFiyat, toplamucret, d);
	printf("Kayit basari ile gerceklesmistir.\n");
	fclose(dosya);
}



int main() {
	int secim;
	while (1) {
		printf("1-Urun Ekle\n");
		printf("2-Urun Listele\n");
		printf("3-Urun Satin Al\n");
		printf("0- Cikis\n");
		printf("Seciminiz: ");
		scanf("%d", &secim);

		switch (secim)
		{
		case 1:
			srand(time(NULL));
			int n = 100 + rand() % 900;
			int f;
			struct urunler yd;
			yd.barkod = n;
			yd.urun_Adi = (char*)malloc(sizeof(char) * 50);
			printf("Urun adi giriniz: ");
			scanf("%s", yd.urun_Adi);

			printf("Kategori adi giriniz: ");
			scanf("%s", yd.kategori);


			printf("Urun fiyatini giriniz: ");
			scanf("%d", &f);
			yd.birimFiyat = f;


			FILE *dosya = fopen("barkod.txt", "a");
			fprintf(dosya, "%d %s %s %d \n", yd.barkod, yd.urun_Adi, yd.kategori, yd.birimFiyat);
			printf("Kayit basari ile gerceklesmistir.\n");

			fclose(dosya);
			break;
		case 2:
			tarayici();
			break;
		case 3:			
			tarayici();			
			if (p == 0) {
				FILE *fp = fopen("barkod.txt", "r");
				int n, flag = 0, k = 0;
				int kg, miktar, d, toplam = 0;
				time_t t;
				int i = 0, j;
				struct urunler *girdi = (struct urunler *)malloc(sizeof(struct urunler) * 300);
				printf("Barkod no giriniz:");
				scanf("%d", &n);

				while (!feof(fp)) {
					girdi[i].urun_Adi = (char *)malloc(sizeof(char) * 300);
					fscanf(fp, "%d %s %s %d \n", &girdi[i].barkod, girdi[i].urun_Adi, girdi[i].kategori, &girdi[i].birimFiyat);
					i++;
				}
				for (j = 0; j<i; j++) {
					if (n == girdi[j].barkod) {
						flag = 1;
						printf("1-Kg ile satin alma\n");
						printf("2-Miktar ile satin alma ");
						scanf("%d", &d);
						if (d == 1) {
							printf("Kac kg satin alacaginizi giriniz: ");
							scanf("%d", &kg);
							toplam = girdi[j].birimFiyat*kg;
						}

						else if (d == 2) {
							printf("Miktar giriniz: ");
							scanf("%d", &miktar);
							toplam = girdi[j].birimFiyat*miktar;
						}

						else {
							printf("Hatali secim...\n");
							k = 1;
						}

						if (k == 0) {
							time(&t);
							yazici(girdi[j], toplam, ctime(&t));
						}
					}
				}
				if (flag == 0) {
					printf("\nBarkod hatali...\n\n");

				}
			}
			break;

		default:

			break;
		}
		if (secim == 0) {
			printf("Program Sonlandirildi...\n");
			break;
		}

	}
	getch();
	return 0;
}