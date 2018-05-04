#include <stdio.h>
#include <stdlib.h>

///pointerlar

int main()
{
    int x ; /// tamsayi --- tipi ad deger adres
    int *xPtr; /// adres tutan bir degisken
    x=5;
    xPtr=&x;
    printf("\nx in degeri : %d",x);
    printf("\nx in adresi : %p",&x);  ///hexadecimal adress
    printf("\nx in adresi : %p",&x);  ///decimal adress

    printf("\n ---------------------\n");

    printf("xPtr degeri : %p\n",xPtr);
    printf("xPtr adresi : %p\n",&xPtr);
    printf("xPtr nin goterdigi deger : %d\n",*xPtr);  /// * ... adresindeki deðer

    printf("\n ---------------------\n");

    printf("&*xPtr : %p\n",&*xPtr);
    printf("*&xPtr : %p\n",*&xPtr);

    printf("\n ---------------------\n");

    printf("*&*xPtr : %p\n",*&*xPtr);  ///  5
    printf("&*&xPtr : %p\n",&*&xPtr);  ///  xptr adresi

    *xPtr=7;   ///adres üzerinden degisken degistirme
    printf("\n%d\n\n",x);

    char k='a';
    char *kP;
    double g=5.5, *gP;
    kP=&k;
    gP=&g;
    printf("kP = %d\tgP = %d\n",kP,gP);

    kP++;
    gP = gP + 4;
    printf("kP = %d\tgP = %d\n",kP,gP);

    return 0;
}

