#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    int n;
    int i;
    char karakter[500];
    int kelime;


    dosya=fopen("tekcift.txt","w");
    if(dosya == NULL)
    {
        printf("Dosya olusturulamadi.\n");
    }
    else
    {
        printf("n: ");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
            if(i%2==0)
            {
                fprintf(dosya,"%d = Cift\n",i);
            }
            else
            {
                fprintf(dosya,"%d = Tek\n",i);
            }
        }


        fclose(dosya);
    }
    printf("Bilgiler dosyaya yazilmistir.\n");
    int j=0;

    dosya=fopen("tekcift.txt","r");



    if(dosya==NULL)
    {
        printf("Dosya bulunamadi.\n");
    }
    else
    {

       do
       {
           kelime=fgetc(dosya);
           if(kelime!=EOF)
           {
               putchar(kelime);

           }

       }while(kelime!=EOF);
        fclose(dosya);
    }







    return 0;
}
