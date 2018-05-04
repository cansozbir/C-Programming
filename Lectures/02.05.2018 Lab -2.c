#include <stdio.h>
#include <stdlib.h>

///matris toplamý
#define maxSayi 100
int main()
{
    int a[maxSayi][maxSayi];
    int b[maxSayi][maxSayi];
    int c[maxSayi][maxSayi];

    int satir,sutun,i,j;
    printf("satir ve sutun sayisini giriniz");
    scanf("%d%d",&satir,&sutun);

    for(i=0;i<satir;i++)   ///a matrisi iste
    {
        for(j=0;j<sutun;j++)
        {
            printf("a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<satir;i++)   ///b matrisi iste
    {
        for(j=0;j<sutun;j++)
        {
            printf("b[%d][%d] : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<satir;i++)   ///c = a+b
    {
        for(j=0;j<sutun;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nA matrisi\n");
    matrisYazdir(satir,sutun,a);
    printf("\nB matrisi\n");
    matrisYazdir(satir,sutun,b);
    printf("\nC matrisi\n");
    matrisYazdir(satir,sutun,c);
    return 0;
}
void matrisYazdir (int sat,int sut,int dizi[][maxSayi])  ///burada ilkini boþ býrakýrsak esnek bir alan ayýrmýþ oluruz
{   int i,j;                                             /// ama 2. de blok blok ayýracagý icin bir sýnýr vermez zorundayýz
    for(i=0; i<sat; i++)
    {
        for(j=0; j<sut; j++)
        {
            printf("%d ",dizi[i][j]);
        }
        printf("\n");

    }
}