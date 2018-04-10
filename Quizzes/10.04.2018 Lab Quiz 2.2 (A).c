#include <stdio.h>
#include <stdlib.h>

/// bir sayının eleman sayısını recursive fonksiyonlar yardımıyla bulunuz

int basamakbul(int n);
void main()
{
    int sayi;
    printf("\nSayiyi Giriniz : ");
    scanf("%d",&sayi);
    printf("\n%d sayisi %d basamaklidir\n",sayi,basamakbul(sayi));

}

int basamakbul(int n)
{
    if (n<10)
        return 1;
    else
    {
        return 1+basamakbul(n/10);
    }
}
