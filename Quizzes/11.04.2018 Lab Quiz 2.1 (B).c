#include <stdio.h>
#include <stdlib.h>

/// Örn. 10 elemanlı bir dizi için bu dizinin 1.elemanı ile 10. elemanını
/// 2. elemanı ile 9. elemanını... toplayıp yeni bir diziye atayın ve bu diziyi yazdırın
/// Soruda dizinin çift eleman sayısına sahip olacagı belirtildi tek için çalışmasına gerek yok

int main()
{   /// Dizinin eleman sayisini ve elemanlarını kullanıcıya girdirtelim.
    int elemansayisi,i;
    printf("\nDizinin Kac Elemanli Olacagini Giriniz : ");
    scanf("%d",&elemansayisi);
    int A[elemansayisi];

    for (i=0;i<elemansayisi;i++)
    {
        printf("\nDizinin %d indeksindeki elemani giriniz :",i+1);
        scanf("%d",&A[i]);
    }


    int sonuc[(elemansayisi/2)];

    for (i=0;i<(elemansayisi/2);i++)
    {
        sonuc[i] = A[i];
        sonuc[i] += A[elemansayisi-i-1];
    }

    printf(" Sonuc Dizisi : ");
    for (i=0;i<(elemansayisi)/2;i++)
    {
        printf(" [%d] ",sonuc[i]);
    }
    return 0;
}

