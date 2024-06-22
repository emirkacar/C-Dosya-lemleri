#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *dosya;
    char ad[5][50];
    char soyad[5][50];
    int not[5];
    int i=0;
    int max=0;
    char enYuksekAlanKisi[5];

    dosya=fopen("ogrencinotlari.txt","r");

    if(dosya!=NULL)
    {
        while(!feof(dosya))
        {
            fscanf(dosya,"%s %s %d",ad[i],soyad[i],&not[i]);
            if(max<not[i])
            {
                max=not[i];
                strcpy(enYuksekAlanKisi,ad[i]);
            }
            i++;

        }
        printf("En yuksek alan kisi : %s notu :%d'dir",enYuksekAlanKisi,max);


        fclose(dosya);

    }
    else
    {
        printf("Dosya okunamadi.\n");
    }




    return 0;
}
