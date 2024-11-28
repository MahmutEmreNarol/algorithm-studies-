#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j ;

     int dizi[3][2];
     for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&dizi[i][j]);
        }
     }
     for(i=0;i<3;i++)
        {for(j=0;j<2;j++){
        printf("%d",dizi[i][j]);
        printf("\n");

               }


     }

    return 0;
}
