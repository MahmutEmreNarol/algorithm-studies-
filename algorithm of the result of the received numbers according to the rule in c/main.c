#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Kullanıcıdan alınan sayıların farklarının 10 ile 20 arasında olma durumunda çarpımlarını aksi durumda ise toplamlarını yazdıran bir algoritma
     float sayi_1 ;
     float sayi_2 ;
    printf("Sayý 1 i giriniz\n");
    scanf("%f" ,&sayi_1);
    printf("Sayý 2 yi giriniz\n");
    scanf("%f",&sayi_2);

float fark=  abs(sayi_1- sayi_2);
if(fark>=10 && fark<=20){
    float sonuc = sayi_1*sayi_2;
    printf("%f",sonuc);
}
else{float sonuc_1 = sayi_1+sayi_2;
printf("%f",sonuc_1);

}


    return 0;
}
