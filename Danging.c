#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = NULL;
	int *q = NULL;
	
	p = (int *)mallc(sizeof(int)*10);
	
	q = p;
	
	free(p);
	
	
	return 0;
}