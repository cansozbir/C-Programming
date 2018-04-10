#include <stdio.h>
#include <stdlib.h>
/// 5 elemanlý bir diziye klavyeden degerler alma
/// dizi elemanlarýný yazdýrma
/// dizi elemanlarýný tersten yazdýrma
#define BOYUT 5    /// Bunu yazdýktan sonra altta boyut deðiþtirilemez sabit kalýr 5 olarak

int main()
{
    int dizi[BOYUT];
    printf("\nDiziye atmak icin 5 sayi giriniz");
    ///scanf("%d",&dizi[0])
    int k;
    for (k=0;k<BOYUT;k++)
    {   printf("\n%d inci elemani giriniz : ",k+1);
        scanf("%d",&dizi[k]); ///& iþaretini koysan da olur koymasan da
    }
    printf("\n\nDizi yazdýr \n");
    for (k=0;k<BOYUT;k++)
    {
        printf("\n dizi[%d]=%d",k,dizi[k]);
    }
    printf("\n\n");
    return 0;


    /// bir de tersten yazdiralim diziyi
    printf("\n\nDiziyi tersten yazalim");
    for (k=BOYUT-1;k>=0;k--)
    {
        printf("\nDizi[%d] = %d",k,dizi[k]);
    }
}