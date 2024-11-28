#include <stdio.h>
#include <stdlib.h>

int main()
{
    float _vize;
    float _final;
    printf("Lütfen vize notu giriniz\n");
    scanf("%f",&_vize);
    printf("Lütfen final notu giriniz\n");
    //printf("vize notunuz %f",_vize);
    scanf("%f",&_final);
    if(_vize>=0&& _vize<=100&& _final<=100 && _final>=0 ){

        float ortalama = _vize*0.4+_final*0.6;
        //printf(" Ortalamanýz = %f ",ortalama );
        if(ortalama<=50){
                printf("DD");

        }else if (ortalama<=65)
        printf("CC");

    else if (ortalama <=85)
    printf("BB");
    else if(ortalama<=100)
    printf("AA");




}
return 0;}
