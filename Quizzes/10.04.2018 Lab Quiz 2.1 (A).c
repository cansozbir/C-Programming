#include <stdio.h>
#include <stdlib.h>

/// A ve B matrislerini toplayıp A nın ilk halini ve toplandıktan sonraki halini bastırınız
/// ben burada ek olarak matrislere değer atamayı da elle yapmak istedim...

void main()
{
    int i,j,a,b,toplam[i][j];
    printf("Satır - Sutun sayisi giriniz\n");
    scanf("%d%d",&a,&b);
    a -= 1;b -= 1;
    int A[a][b],B[a][b];

    for (i=0;i<=a;i++)
        for (j=0;j<=b;j++)
            {
            printf("\nA listesinin %d.satir %d.sutun elemani :",i+1,j+1);
            scanf("%d",&A[i][j]);
            printf("\nB listesinin %d.satir %d.sutun elemani :",i+1,j+1);
            scanf("%d",&B[i][j]);
            }
    /// üst kısımda matrisleri kullanıcıya elle tanımlattık

    for (i=0;i<=a;i++){
        for (j=0;j<=b;j++){
            toplam[i][j] = A[i][j] + B[i][j];
            }}


    printf("\n\nA ve B dizilerinin toplami  \n\n");
    for (i=0;i<=a;i++)
        {
        for (j=0;j<=b;j++)
            {
            if (j==0)
            printf("|");
            printf(" %d ",toplam[i][j]);
            }
        printf("|\n");
        }


}

