#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir;
    int sutun;
    int i ,j;
    printf("L�tfen sat�r say�s�n� giriniz\n");
    scanf("%d",&satir);
    printf("L�tfen s�t�n say�s�n� giriniz\n");
    scanf("%d",&sutun);
    int dizi[satir][sutun];
    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
                printf("Deger giriniz \n");
            scanf("%d",&dizi[i][j]);
        }
    }
    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            printf("%d \t",dizi[i][j]);

        }
        printf("\n");
    }


    return 0;
}
