#include <stdio.h>
#include <stdlib.h>

int main()
{
    {
    int vizeAdedi;
    float toplam=0;


    printf("Ka� adet vize notu gireceksiniz? ");
    scanf("%d", &vizeAdedi);

    float vizeNotlari[vizeAdedi];


    for (int i = 0; i < vizeAdedi; i++) {
        printf("%d. vize notunu giriniz: ", i + 1);

        scanf("%f", &vizeNotlari[i]);
        toplam+= vizeNotlari[i];
    }


    printf("\nGirdi�iniz vize notlar�:\n");
    for (int i = 0; i < vizeAdedi; i++) {
        printf("%d. vize notu: %.2f\n", i+1  , vizeNotlari[i]);
    }
    printf("  Vize notlar�n�n toplam�  %f \n",toplam);


    int finalAdedi;
    float finaltoplam=0;
    printf("L�tfen final adedi girin ");
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
    printf("final notlar� toplam� %f\n",finaltoplam);


    float vizeort= toplam/vizeAdedi;
    float finalort= finaltoplam/finalAdedi;
    printf("vize ortalaman�z %f\n final ortalaman�z %f",vizeort,finalort);
    float agirlikliort= finalort*0.6+ vizeort*0.4;
    printf("T�m d�nemki a��rl�kl� ortalaman�z = %f ",agirlikliort);

    return 0;
}}

