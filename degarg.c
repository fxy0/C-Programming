#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

float ortalama(int tane,...)

{

    va_list argumanlar;
    int birarguman,i,toplam=0;
    float ort;
    va_start(argumanlar,tane);
    for(i=0;i<tane;i++)
    {
        birarguman=va_arg(argumanlar,int);
        toplam+=birarguman;
    }
    
    
    va_end(argumanlar);
    ort=(float) toplam/tane;
    return ort;

}


int main()
{

float ort;
ort=ortalama(3,5,5,5);
printf("3 sayinin ortalamasi=%f",ort);

}
