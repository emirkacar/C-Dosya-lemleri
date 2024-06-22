#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char ad[50];
    char soyad[25];
    int not;
    int i;


    dosya=fopen("story.txt","r");
    if(dosya == NULL)
    {
        printf("Dosya bulunamadi.\n");
    }
    else
    {
        int lines=0;
        char ch=fgetc(dosya);
        while(ch!=EOF)
        {
            if(ch == '\n')
            {
                lines++;
            }
            ch=fgetc(dosya);
        }
        lines++;
        rewind(dosya);
        int toplam=0;
        for(i=0;i<lines;i++)
        {
            fscanf(dosya,"%s %s %d",ad,soyad,&not);
            toplam+=not;
            printf("Ad:%s Soyad:%s Not:%d\n",ad,soyad,not);
        }
        float ortalama=(float)toplam / lines;
        printf("Ortalama : %.2f",ortalama);
        fclose(dosya);

    }

    return 0;
}
