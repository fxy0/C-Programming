//1den 100`e kadar olan asal sayıları bulma

#include <stdio.h>
#include <stdlib.h>


int asalrekursif(int asal,int i)
{
  
if(i==1)
    return 1;
else
{
    if(asal%i==0)
        return 0;
        else
            asalrekursif(asal,i-1);


}




}


int main()
{
int asalmi=100,rekursif,i;

for(i=2;i<=asalmi;i++)
{
    rekursif=asalrekursif(i,i/2);
    if(rekursif==1)
        printf("%d ",i);
}

}
