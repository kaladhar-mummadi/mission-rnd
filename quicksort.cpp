// quicksort.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<stdio.h>
void quicksort(int [10],int,int);

int _tmain(int argc, _TCHAR* argv[])
{

  int x[20],size,i;

  printf("Enter size of the array: ");
  scanf_s("%d",&size);

  printf("Enter %d elements: ",size);
  for(i=0;i<size;i++)
    scanf_s("%d",&x[i]);

  quicksort(x,0,size-1);

  printf("Sorted elements: ");
  for(i=0;i<size;i++)
    printf(" %d",x[i]);

  return 0;
}

void quicksort(int x[10],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first+1;
         j=last;

         while(i<j){
             while(i<last){
				 if(x[i]<=x[pivot])
				  i++;
				 else if(x[j]>x[pivot]) j--;

			 }
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}	

