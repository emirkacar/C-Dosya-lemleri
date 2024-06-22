#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char karakter1[50];
    char karakter2[50];
    int not;
    int toplam=0;
    int sayac=0;


    dosya=fopen("ogrencinotlari.txt","r");

    if(dosya!=NULL)
    {
        while(!feof(dosya))
        {
            fscanf(dosya,"%s%s%d",karakter1,karakter2,&not);
            toplam+=not;
            sayac++;
            printf("%s %s %d\n",karakter1,karakter2,not);
        }

        float ortalama=(float)toplam/sayac;
        printf("Ortalama : %.2f",ortalama);


    }
    else
    {
        printf("Dosya okunamadi.\n");
    }




    return 0;
}
