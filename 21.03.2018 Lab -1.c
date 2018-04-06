#include <stdio.h>
#include <stdlib.h>
void Dortgenciz(int uzun,int kisa);  ///protatip
int karealan (int);
int main()
{   int secim,kenar1,kenar2;
    do {
        printf("1.dikdortgen cizme\n2.Kare alan bul\n3.Hakkinda\n0.Cikis..");

        do {
            printf("seciminizi giriniz ...\n");
            scanf("%d",&secim);
        }
        while (secim< 0 || secim>3); ///0-1-2-3 seçildi
        switch(secim)
        {
        case 2:
            printf("\n --->kare\nKenari giriniz:  ");
            scanf("%d",&kenar1);
            printf("\nkarenin alani %d \n\n",karealan(kenar1));
            break;

        case 1:
            printf("\n --->dikdortgen\n");
            Dortgenciz(kenar1,kenar2);
            break;

        case 3:
            printf("\n --->Bilgi\n");
            return (bilgiver());
            break;
        case 0:
            printf("\nCikis yapiyorsunuz....");
        ///default: ///opsiyoneldir işine yararsa kullanırsın

        }
    }
    while(secim!=0);
    printf("\n");
    return 0;
}


/// Fonk tipi - Adi - (Parametreleri)
void Dortgenciz(int uzun,int kisa)
{
    printf("Kenar giriniz: ");
            scanf("%d%d",&uzun,&kisa);
            int i,j;
            for (i=1 ; i<=uzun ; i++)
            {
                for (j=1;j<=kisa; j++)
                {
                    printf(" * ");
                }
                printf("\n");

            }
}
int karealan (int k){
    return k*k;
}
void bilgiver(){
 printf("\n hobb kardesm ss aldim gel buraya");

}
