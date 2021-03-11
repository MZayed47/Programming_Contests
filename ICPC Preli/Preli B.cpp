#include<bits/stdc++.h>
using namespace std;

int main()
{
   int j;
   int nDay = 100;
   printf("%d\n", nDay);
   int k = 0;
   for (j=1; j<=nDay; j++)
   {
       printf("%d", k=k+2);
       if (j<nDay)
       {
        printf(" ");
       }
   }
   printf("\n");
   return 0;
}
