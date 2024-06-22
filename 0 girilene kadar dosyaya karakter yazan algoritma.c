#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    FILE *dosya;
    char kelime[150];
    int i=0;




    dosya=fopen("kelimeler.txt","a");

    if(dosya==NULL)
    {
        printf("Dosya bulunamadi.\n");
    }
    else
    {
        do
        {

            fflush(stdin);
            printf("Kelimeyi giriniz: ");
            gets(kelime);
            if(strcmp(kelime,"0")==0)
            {
                exit(0);

            }
            else
            {
                fprintf(dosya,"%s\n",kelime);
            }

        }while(1);
        fclose(dosya);

    }

    return 0;
}
