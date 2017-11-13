//1den 100`e kadar olan asal sayıları bulma

#include <stdio.h>
#include <stdlib.h>


int asalrekursif(int asal,int i)
{
  /*  int i,j,s;
    for(i=2;i<10;i++){

s=0;
        for(j=2;j<i;j++)
        {
             printf("Tur = %d\n",j);
             printf("--%d--%d--\n",i,j);
             if(i%j==0)
                s=1;
        }
        if(s==0)
        printf("Asaldir=%d\n",i);
    }

return 1;
*/

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
