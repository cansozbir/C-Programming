#include <stdio.h>
#include <stdlib.h>
/// klavyeden girilen bir cümlenin kelimelerini alt alta yazdirma
int main()
{

    char cumle[100];
    gets(cumle);
    int i;

    printf("\n\nKELIMELER\n");
    for (i=0 ; i<strlen(cumle) ; i++)
    {
        if (cumle[i]!=' ')
            printf("%c",cumle[i]);
        else
            printf("\n");
    }



    return 0;
}
