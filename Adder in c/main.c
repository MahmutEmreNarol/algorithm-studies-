#include <stdio.h>
#include <conio.h>

int main()  {

	int x,y;
	printf("Hesaplamak istedi�iniz iki sayiyi giriniz \n");
	scanf("%d %d", &x, &y);
	printf("\n %d ve %d sayilarinin toplama islemi, %d+%d=%d",x,y,x,y, x+y);
	printf("\n %d ve %d sayilarinin c�karma islemi, %d-%d=%d",x,y,x,y, x-y);
	printf("\n %d ve %d sayilarinin �arpma islemi, %d*%d=%d",x,y,x,y, x*y);
	printf("\n %d ve %d sayilarinin bolme islemi, %d/%d=%f",x,y,x,y, (x*1.0)/y);
	getch();
	return 0;
}
