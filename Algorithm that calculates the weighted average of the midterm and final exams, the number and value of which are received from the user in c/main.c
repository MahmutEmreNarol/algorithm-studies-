#include <stdio.h>
#include <stdlib.h>

int main()
{
    {
    int vizeAdedi;
    float toplam=0;


    printf("Kaç adet vize notu gireceksiniz? ");
    scanf("%d", &vizeAdedi);

    float vizeNotlari[vizeAdedi];


    for (int i = 0; i < vizeAdedi; i++) {
        printf("%d. vize notunu giriniz: ", i + 1);

        scanf("%f", &vizeNotlari[i]);
        toplam+= vizeNotlari[i];
    }


    printf("\nGirdiðiniz vize notlarý:\n");
    for (int i = 0; i < vizeAdedi; i++) {
        printf("%d. vize notu: %.2f\n", i+1  , vizeNotlari[i]);
    }
    printf("  Vize notlarýnýn toplamý  %f \n",toplam);


    int finalAdedi;
    float finaltoplam=0;
    printf("Lütfen final adedi girin ");
    scanf("%d",&finalAdedi);
    float finalnotlar[finalAdedi];
    for(int i=0;i<finalAdedi;i++){
            printf("%d. final notunu giriniz ",i+1);
    scanf("%f",&finalnotlar[i]);
    finaltoplam+=finalnotlar[i];

    }

    for(int i=0;i<finalAdedi;i++){
        printf("%d. not : %f\n",i+1,finalnotlar[i]);
    }
    printf("final notlarý toplamý %f\n",finaltoplam);


    float vizeort= toplam/vizeAdedi;
    float finalort= finaltoplam/finalAdedi;
    printf("vize ortalamanýz %f\n final ortalamanýz %f",vizeort,finalort);
    float agirlikliort= finalort*0.6+ vizeort*0.4;
    printf("Tüm dönemki aðýrlýklý ortalamanýz = %f ",agirlikliort);

    return 0;
}}

