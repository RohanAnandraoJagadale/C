#include<stdio.h>

int main()
{
   int Arr[4] = {11,21,51,101};
    
   printf("%d\n",sizeof(Arr));	
   printf("%d\n",sizeof(Arr[2]));
   
   printf("%d\n",Arr[2]);
   printf("%d\n",Arr);
   printf("%d\n",&Arr);
   
   printf("%d\n",Arr+1);
   printf("%d\n",(&Arr)+1);
   
   printf("%d\n",Arr[2]);
   printf("%d\n",*(Arr + 2));
   printf("%d\n",*(2 + Arr));
   printf("%d\n",2[Arr]);
   
   return 0;   
}