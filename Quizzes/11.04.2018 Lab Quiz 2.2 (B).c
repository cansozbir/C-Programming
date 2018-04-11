#include <stdio.h>
#include <stdlib.h>
/// Recursive fonksiyon kullanarak bir sayının rakamları toplamını bulunuz
/// Örn. 345 için 3+4+5=12

int main()
{
    int sayi;
    printf("Sayiyi giriniz : ");
    scanf("%d",&sayi);
    printf("%d sayisinin rakamlari toplami %d dir ",sayi,sum(sayi));

    return 0;
}


int sum(int sayi)
{


    if (sayi<10) return sayi;

    return ((sayi%10)+ sum(sayi/10));


}


