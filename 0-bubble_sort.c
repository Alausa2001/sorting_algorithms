#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 *bubble_sort - this function sort the integer
 *in desending order
 *@array: Array of unsorted integers
 *@size: maximum size
 *Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
  int i, temp = 0;
  int res = size;
  
  while(i)
    {
      for(i=0; i<res-1; i++)
        {
          if(array[i] < array[i+1])
            {
              temp = array[i];
              array[i] = array[i+1];
              array[i+1] = temp;
              print_array(array, size);
            }

        }
      res--;
      if(res == 1)
            break;
    }
}
