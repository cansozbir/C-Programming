#include <stdio.h>
#include <stdlib.h>
int x=1 ; ///global degısken

void kullanLokal();
void kullanStatikLokal();
void kullanglobal();


int main()
{
    printf("x = %d\n",x);

    int x = 5; /// yerel degısken

    printf("\nmain fonk icindeki ic scopedaki degisken = %d",x);
    {
        int x=7;
        printf("\nMain fonk icindeki ic scope da x = %d",x);
    }
    
    kullanLokal();
    kullanStatikLokal();
    kullanglobal();

    printf ("\n\n\n---- AYNI FONSIYONLAR TEKRAR CAGIRILIRSA ----\n\n\n");
    
    kullanLokal();
    kullanStatikLokal();
    kullanglobal();
    return 0;
}






void kullanLokal()
{
    int x=25;
    printf("\nkullanlokal fonksiyonunun icinde en basta x =%d",x);
    x++;
    printf("\nkullanlokal fonksiyonunun icinde sonda x =%d",x);
}





void kullanStatikLokal()
{
    static int x=50;
    printf("\nkullansatiklokal fonk icinde en basta x = %d",x);
    x++;
    printf("\nkullansatiklokal fonk icinde sonda x = %d",x);
}





void kullanglobal()
{
    printf("\nkullanglobal fonksiyonu icinde en basta x = %d",x);
    x *= 10;
    printf("\nkullanglobal fonksiyonu icinde sonda x = %d",x);
}
