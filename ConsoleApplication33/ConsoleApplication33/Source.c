#include <stdio.h>
#include <stdlib.h>  // system() i�in gerekli!!
int main(){
    int kenar1, kenar2, hipotenus;
    int sinir, sayac=0;
    
    printf("Maksimum Hipotenus Uzunlugunu Giriniz: ");
    scanf("%d", &sinir);
    
//ilk �zel ��gen 3 4 5 oldu�undan kenar1=3 ile ba�l�yoruz
//kenar1<kenar2<hipotenus ba�lant�s� olaca��ndan hipotenus = kenar2+1 ve kenar2=kenar1+1 ile ba�layal�m
     for(kenar1=3; kenar1<=sinir; kenar1++){
         for(kenar2=kenar1+1; kenar2<=sinir; kenar2++){
             for(hipotenus=kenar2+1; hipotenus<=sinir; hipotenus++){
                 if((hipotenus*hipotenus) == (kenar1*kenar1) + (kenar2*kenar2)){
                     sayac++; //Ka� adet �zel ��gen oldu�unu g�rebilmek i�in sayac eklendi!
                     printf("%d)<%d %d %d>\n",sayac, kenar1, kenar2, hipotenus);
                     
                 }
                     
             }
         }
     }
    
    system("pause"); // Herhangi bir tu�a basana kadar program� beklemeye al�r
    return 0;       // program� sonland�r�r.
	}
