#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* FILE *dosya;
    char isim[50];
    char soyad[50];
    int yas;
    int i;

    dosya=fopen("canan.txt","r");

    if(!feof(dosya)!=NULL)
    {
        fscanf(dosya,"%s%s%d",&isim,&soyad,&yas);
        printf("Ad:%s Soyad:%s Yas:%d",isim,soyad,yas);


    }
    else
    {
        printf("Dosya bulunamadi.\n");
    }

    fclose(dosya);*/



    /*FILE *dosya;
    char kelime[500][500];
    int i;



    dosya=fopen("kdizim.txt","r");

    if(dosya!=NULL)
    {
        i=0;
        while(!feof(dosya))
        {
            fscanf(dosya,"%s",&kelime[i]);
            printf("%s ",kelime[i]);
            i++;
        }
    }
    else
    {
        printf("Dosya bulunamadi.\n");
    }

    fclose(dosya);*/



    /*FILE *dosya;
    int no[30];
    char ad[30][30];
    int puan[30];
    int i=0;

    dosya=fopen("ogrenci.txt","r");
    if(dosya!=NULL)
    {

        while(!feof(dosya))
        {
            fscanf(dosya,"%d %s %d",&no[i],ad[i],&puan[i]);
            printf("%d %s %d\n",no[i],ad[i],puan[i]);
            i++;
        }
    }
    else
    {
        printf("Dosya bulunamadi\n");
    }

    fclose(dosya);*/


    /*FILE *dosya;
    char karakter;
    int i=0;

    dosya=fopen("lorem.txt","r");
    if(dosya!=NULL)
    {
        while(!feof(dosya))
        {
            karakter=getc(dosya);
            printf("%c",karakter);
        }
    }
    else
    {
        printf("Dosya bulunamadi.\n");
    }



    fclose(dosya);*/












    return 0;
}
