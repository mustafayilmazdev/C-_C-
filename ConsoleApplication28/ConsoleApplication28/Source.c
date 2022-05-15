#include <stdio.h>

//Dizi boyutunu 5 olarak belirttim.
#define QUEUESIZE 5

//dizimiz 5 elemanlý olacak dizi[4] 0 1 2 3 4
int Queue[QUEUESIZE - 1];
//Ýlgili konuda size front ve rear elemanlarýný tutmaktan bahsetmiþtim, varsayýlan deðerleri -1 olacak.
int frontElement = -1, rearElement = -1;

//kuyruða eleman ekleme fonksiyonu
void enQueue(int item)
{
	//Kuyruk eðer dolu ise hata çýktýsý veriyoruz
	if (rearElement > 4)
	{
		printf("\n *********************************************\n");
		printf("\n Your Queue is Full, pls dequeue an element... ");
	}
	else
	{
		if (frontElement == -1)
		{
			//Eðer kuyrukta hiç eleman yoksa front indisini bir artýrýyoruz ki dizinin 0. indisine eleman ekleyebilelim.
			frontElement = frontElement + 1;
		}
		//Eleman ekleyince en sondaki eleman 1 artar
		rearElement = rearElement + 1;
		//En arkadaki indise yeni elemanýmýzý yerleþtiririz.
		Queue[rearElement] = item;
	}
}

//Kuyruktan eleman çýkaran fonksiyon
void deQueue()
{
	//Ýki kontrol yaptýðýmýza dikkat edin, en öndeki eleman, en arkadaki elemanýn arkasýnda olamaz :)
	if (frontElement == -1 || frontElement > rearElement)
	{
		printf("\n *********************************************\n");
		printf("\n Your Queue is Already Empty, Please Enqueue an item");
	}
	else
	{
		//En öndeki elemanýn indisini bir artýrýnca kuyruktan eleman çýkarmýþ oluyoruz. 
		//Ama unutmayýn, bu bir probleme neden olacak, çözümü dairesel kuyruk'ta.
		frontElement = frontElement + 1;
	}

}

void printQueue()
{
	int i;
	if (frontElement == -1 || frontElement > rearElement)
	{
		printf("\n *********************************************\n");
		printf("\n Your Queue is Already Empty, Please Enqueue an item");
	}
	else
	{
		for (i = rearElement; i >= frontElement; i--)
		{
			printf(" %d \n", Queue[i]);
		}
	}
}
int main()
{
	int choise, item;
	while (1 == 1)
	{
		printf("\n 1- Enqueue element ...");
		printf("\n 2- Dequeue element ...");
		scanf("%d", &choise);

		switch (choise)
		{
		case 1:
			printf("\n Which number do you want to enqueue? ");
			scanf("%d", &item);
			enQueue(item);
			printQueue();
			break;
		case 2:
			deQueue();
			printQueue();
			break;
		}

	}
	return 0;
}