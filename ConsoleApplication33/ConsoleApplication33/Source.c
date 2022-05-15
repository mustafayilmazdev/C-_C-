#include <stdio.h>
#include <stdlib.h>  // system() için gerekli!!
int main(){
    int kenar1, kenar2, hipotenus;
    int sinir, sayac=0;
    
    printf("Maksimum Hipotenus Uzunlugunu Giriniz: ");
    scanf("%d", &sinir);
    
//ilk özel üçgen 3 4 5 olduðundan kenar1=3 ile baþlýyoruz
//kenar1<kenar2<hipotenus baðlantýsý olacaðýndan hipotenus = kenar2+1 ve kenar2=kenar1+1 ile baþlayalým
     for(kenar1=3; kenar1<=sinir; kenar1++){
         for(kenar2=kenar1+1; kenar2<=sinir; kenar2++){
             for(hipotenus=kenar2+1; hipotenus<=sinir; hipotenus++){
                 if((hipotenus*hipotenus) == (kenar1*kenar1) + (kenar2*kenar2)){
                     sayac++; //Kaç adet özel üçgen olduðunu görebilmek için sayac eklendi!
                     printf("%d)<%d %d %d>\n",sayac, kenar1, kenar2, hipotenus);
                     
                 }
                     
             }
         }
     }
    
    system("pause"); // Herhangi bir tuþa basana kadar programý beklemeye alýr
    return 0;       // programý sonlandýrýr.
	}
