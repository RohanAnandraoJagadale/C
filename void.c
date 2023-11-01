#include<stdio.h>

int main()
{
    
	char ch = 'A';
	int i = 11;
	float f = 9.09;
	double d = 58.65455;
	
	char *cp = &ch;
	int *op = &i;
	float *fp = &f;
	double *dp = &d;
	
	void *vp = &ch;
	
    printf("Value of ch : %c\n",ch);
    printf("Address of ch : %p\n",&ch);
	printf("Value inside cp : %p\n",cp);
	printf("Data refer by cp : %c\n",*cp);
    printf("Size of ch : %d\n",sizeof(ch));
	printf("Size of cp : %d\n",sizeof(cp));
	printf("Size of dp : %d\n",sizeof(dp));
	printf("Value inside dp : %d\n",dp);
	printf("Data refer by dp : %lf\n",*dp);
	printf("Value inside fp : %lf\n",fp);
	printf("Data refer by fp : %lf\n",*fp);
	printf("Data refer by op : %d\n",*op);
	
	printf("Data refer by vp : %c\n",*(char *)vp);
	vp = &i;
	printf("Data refer by vp : %d\n",*(int*)vp);
	
      return 0;
}