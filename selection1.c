#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2)== 0)
	{
	   return true;
	}
	else
	{
	    return false;
	}
}
int main()
{
    int iValue = 0;
	bool bRet;
	
	printf("Enter One Number\n");
	scanf("%d",&iValue);
	
	bRet = ChechEven(iValue);
	if(bRet == true);
	{
	    printf("It is even number\n");
		
	}
	else(bRet == false);
	{
	    printf("It is odd number\n");
	}
     return 0;
}