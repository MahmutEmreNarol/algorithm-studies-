#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir;
    int sutun;
    int i ,j;
    printf("Lütfen satýr sayýsýný giriniz\n");
    scanf("%d",&satir);
    printf("Lütfen sütün sayýsýný giriniz\n");
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
