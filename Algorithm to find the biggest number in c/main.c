#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Ka� adet say� girece�inizi girin\n");
    int sayiAdedi;
    scanf("%d", &sayiAdedi);
    float sayilar[sayiAdedi];


    for (int i = 0; i < sayiAdedi; i++) {
        printf("%d. say�y� giriniz: ", i + 1);
        scanf("%f", &sayilar[i]);
    }


    printf("Girdi�iniz say�lar:\n");
    for (int i = 0; i < sayiAdedi; i++) {
        printf("%f\n", sayilar[i]);
    }


    float enBuyuk = sayilar[0];
    for (int i = 1; i < sayiAdedi; i++) {
        if (sayilar[i] > enBuyuk)
            enBuyuk = sayilar[i];
    }

    printf("En b�y�k say� = %f\n", enBuyuk);

    return 0;
}




