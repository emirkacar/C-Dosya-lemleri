#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char karakter[100];
    int i=0;


    dosya=fopen("Bilgi.txt","r");
    if(dosya!=NULL)
    {

        do
        {
            if(karakter==EOF)
            {
                break;
            }
            karakter[i]=fgetc(dosya);
            printf("%c",karakter[i]);
            i++;

        }while(!feof(dosya));
    }
    else
    {
        printf("Dosya olusturulamadi.\n");
    }



    fclose(dosya);
    printf("\nOkuma islemi tamamlandi.");
    return 0;
}
