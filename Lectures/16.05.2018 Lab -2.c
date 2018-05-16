#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *ad;
    char *soyad;
    int yas;
    double aylikUcret;

}isci;

int main()
{

    isci i1,i2,*ip1,*ip2;
    ip1=&i1;
    ip2=&i2;


    i1.ad="can";
    i1.soyad="sozbir";
    i1.yas=20;
    i1.aylikUcret=1.6;

    i2.ad="esma";
    i2.ad="yenisari";
    i2.yas=33;
    i2.aylikUcret=2.3;

    printf("\nAdi : %s\nSoyad :%s\nYas : %d\nMaas : %f",i1.ad,i1.soyad,i1.yas,i1.aylikUcret);
    printf("\n-------------------------------------->");
    printf("\nAdi : %s\nSoyad :%s\nYas : %d\nMaas : %f",ip1->ad,ip1->soyad,ip1->yas,ip1->aylikUcret);




    return 0;
}
