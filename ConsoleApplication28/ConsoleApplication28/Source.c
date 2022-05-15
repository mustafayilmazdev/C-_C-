#include <stdio.h>

//Dizi boyutunu 5 olarak belirttim.
#define QUEUESIZE 5

//dizimiz 5 elemanl� olacak dizi[4] 0 1 2 3 4
int Queue[QUEUESIZE - 1];
//�lgili konuda size front ve rear elemanlar�n� tutmaktan bahsetmi�tim, varsay�lan de�erleri -1 olacak.
int frontElement = -1, rearElement = -1;

//kuyru�a eleman ekleme fonksiyonu
void enQueue(int item)
{
	//Kuyruk e�er dolu ise hata ��kt�s� veriyoruz
	if (rearElement > 4)
	{
		printf("\n *********************************************\n");
		printf("\n Your Queue is Full, pls dequeue an element... ");
	}
	else
	{
		if (frontElement == -1)
		{
			//E�er kuyrukta hi� eleman yoksa front indisini bir art�r�yoruz ki dizinin 0. indisine eleman ekleyebilelim.
			frontElement = frontElement + 1;
		}
		//Eleman ekleyince en sondaki eleman 1 artar
		rearElement = rearElement + 1;
		//En arkadaki indise yeni eleman�m�z� yerle�tiririz.
		Queue[rearElement] = item;
	}
}

//Kuyruktan eleman ��karan fonksiyon
void deQueue()
{
	//�ki kontrol yapt���m�za dikkat edin, en �ndeki eleman, en arkadaki eleman�n arkas�nda olamaz :)
	if (frontElement == -1 || frontElement > rearElement)
	{
		printf("\n *********************************************\n");
		printf("\n Your Queue is Already Empty, Please Enqueue an item");
	}
	else
	{
		//En �ndeki eleman�n indisini bir art�r�nca kuyruktan eleman ��karm�� oluyoruz. 
		//Ama unutmay�n, bu bir probleme neden olacak, ��z�m� dairesel kuyruk'ta.
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