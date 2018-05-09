#include <stdio.h>
#include <stdlib.h>
#define n 50
/// string kopyalama

int main()
{
    char string1[]="selam";
    char string2[n]="";

    printf("str 1 : %s\n",string1);
    printf("str 2 : %s\n",string2);

    stringKopyala(string2,string1);

    printf("str 1 : %s\n",string1);
    printf("str 2 : %s\n",string2);

    stringKopyala(string2,"Ardahanli");


    printf("str 1 : %s\n",string1);
    printf("str 2 : %s\n",string2);
    return 0;
}

/* kaynak [ s ] [ e ] [ l ] [ a ] [ m ] [ \0 ]

   hedef  [   ] [   ] [   ] [   ] [   ] [   ]

*/

void stringKopyala(char *hedef,char *kaynak)
{
    while (*kaynak != '\0')
    {
        *hedef = *kaynak;
        hedef++;
        kaynak++;
    }
    hedef='\0';
}
