/*  
    Steps to develop the application
	step 1 : Understand the problem statement
	step 2 : Write the algorithm
	step 3 : Deside the programing language 
	step 4 : Write the program
	step 5 : Test the program
*/

// Accept N numbers from user and perform the addition
// Input
//Values of N = 5
//Values : 10 20 30 40 50

//Output
//Addition is : 150

// Algoritham
/*
   START
     Accept the numbers of elements from user
	  Allocate the memory to store that numbers
	  Accept the numbers from user
	  Perform addition of all numbers
	  Display the addition
	END
*/

#include<stdio.h>    // for printf and scanf
#include<stdlib.h>   // fo malloc and free

////////////////////////////////////////////////////////
//
//  Application Name : Addiion of N numbers
//  Input : N numbers
//  Output : Addition
//  Author : Rohan Anandrao Jagadale
//  Date : 18/9/22
//
//////////////////////////////////////////////////////////


int main()
{
   int *Arr = NULL;  //Pointer to hold the address of array
   int iSize = 0;    //Variable to hold size of array
   register int i = 0;        //Loop counter
   int iSum = 0;     //to hold the addition
   
   printf("Please enter how many elements you want?\n");
   scanf("%d",&iSize);
   
   //Allocate the memory
   Arr = (int *)malloc(iSize * sizeof(int));
   printf("Memory allocation is succesful\n");
   
   printf("Please enter the element\n");
   
   for(i = 0; i < iSize; i++)
   {
       scanf("%d",&Arr[i]);
   }
   
   // Perform Addition
   for(i = 0; i < iSize; i++)
   {
      iSum = iSum + Arr[i];
   }

    printf("Addition is : %d\n",iSum);
	
    free (Arr);
	printf("memory gets deallocated.\n");
   return 0;
}










