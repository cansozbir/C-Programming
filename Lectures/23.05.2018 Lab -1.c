#include <stdio.h>
#include <stdlib.h>
typedef struct list {
    int veri;
    struct list *sonraki;
}liste;


liste *ilk =NULL;
liste *yeni, *gezici , *gezici2;

int main()
{
    listele();
    basaEkle(1);
    basaEkle(2);
    basaEkle(3);
    basaEkle(4);
    listele();

    sonaekle(100);
    listele();
    sil(1);
    sil(100);
    printf("\n------\n");
    listele();

    sayEleman();
    ortadanSil(sayEleman());
    listele();

    return 0;
}
int sayEleman()
{
    int sayac =0;
    gezici = ilk;
    while(gezici!=NULL)
    {
        sayac++;
        gezici = gezici->sonraki;
    }
    printf("\nEleman Sayisi : %d\n",sayac);
    return sayac;
}
void ortadanSil(int elmSayi)
{
    printf("\nortadan silindi...\n");
    int orta = elmSayi/2 , sayac=1;
    if (ilk != NULL && ilk->sonraki != NULL)
    {
        gezici = ilk;
        gezici2 = ilk->sonraki;
        while(sayac<orta)
        {
            gezici=gezici->sonraki;
            gezici2=gezici2->sonraki;
            sayac++;
        }
        gezici->sonraki = gezici2->sonraki;
        free(gezici2);


    }
}

void basaEkle (int sayi)
{
    yeni = (liste*)malloc(sizeof(liste));
    yeni->veri = sayi;
    yeni->sonraki = NULL;

    if(ilk==NULL)
    {
        ilk=yeni;
    }
    else
    {
        yeni->sonraki = ilk;
        ilk=yeni;
    }
}
void sonaekle (int sayi)
{
    yeni=(liste*)malloc(sizeof(liste));
    yeni->veri =sayi;
    yeni->sonraki=NULL;
    if(ilk==NULL)
        ilk=yeni;
    else
    {
        gezici=ilk;
        while (gezici->sonraki != NULL)
            gezici = gezici->sonraki;
        gezici->sonraki=yeni;
    }

}
void sil (int sayi)
{
    if(ilk==NULL)
        printf("Liste bos \n");
    else if(ilk->veri == sayi)
    {
        gezici=ilk;
        ilk=ilk->sonraki;
        free(gezici);
    }
    else
    {
        gezici =ilk;
        while(gezici->sonraki != NULL)
        {
            if(gezici ->sonraki ->veri == sayi)
            {
                gezici2=gezici->sonraki;
                gezici->sonraki = gezici2->sonraki;
                free(gezici2);
                break;
            }
            gezici =gezici->sonraki;
        }
    }
}


void listele()
{
    if(ilk==NULL)
        printf("Liste Bos\n");
    else
    {
        gezici = ilk;
        while(gezici != NULL)
        {
            printf("%d ",gezici->veri);
            gezici = gezici->sonraki;
        }
    }
}
