#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Kaç adet sayý gireceðinizi girin\n");
    int sayiAdedi;
    scanf("%d", &sayiAdedi);
    float sayilar[sayiAdedi];


    for (int i = 0; i < sayiAdedi; i++) {
        printf("%d. sayýyý giriniz: ", i + 1);
        scanf("%f", &sayilar[i]);
    }


    printf("Girdiðiniz sayýlar:\n");
    for (int i = 0; i < sayiAdedi; i++) {
        printf("%f\n", sayilar[i]);
    }


    float enBuyuk = sayilar[0];
    for (int i = 1; i < sayiAdedi; i++) {
        if (sayilar[i] > enBuyuk)
            enBuyuk = sayilar[i];
    }

    printf("En büyük sayý = %f\n", enBuyuk);

    return 0;
}




