#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ogrenciTablo[2][3];
    int i,j;

    for(i=0; i<2; i++ )  ///satir
    {
        for(j=0; j<3; j++) ///sutun
        {
            printf("%d. ogrencinin %d. sinav notu :",i+1,j+1);
            scanf("%d",&ogrenciTablo[i][j]);

        }
        printf("\n");

    }

    printf("\nVIZE\tFINAL\tBUT\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",ogrenciTablo[i][j]);
        }
        printf("\n");

    }

    return 0;
}