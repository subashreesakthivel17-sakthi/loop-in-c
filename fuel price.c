#include <stdio.h>

int main()
{
   int n,fuel;
   int  price=-1,highpriceday=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&fuel);
        if(fuel>price)
        {
         price=fuel;   
        }
   
        if(fuel>100){
          highpriceday++;
        }
   }
        printf("Highest Price:%d\n",price);
        printf("High Price Days:%d",highpriceday);

    return 0;
}