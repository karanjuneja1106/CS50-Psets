/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    bool res=false;
    if(value<0)
    return res;
    else{
   int l =0;
   int u=n-1;
   int m=(l+u)/2;
 
   while (l<=u)
   {
      if (values[m]<value)
         l=m+1;    
      else if (values[m]==value) {
        res=true;
         break;
      }
      else
        u=m-1;
 
        m=(l+u)/2;
    }
   }
    return res;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++)
        {
            if(values[j]>values[j+1])
            {
                int temp=values[j];
                values[j]=values[j+1];
                values[j+1]=temp;
            }
        }
    }
    
    return;
}