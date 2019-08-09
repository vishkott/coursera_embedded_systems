/******************************************************************************
 * Copyright (C) 2019 by Vishwanath Kottignahal
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Vishwanath Kottignahal is not liable for any misuse of this
 * material.
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Vishwanath Kottignahal>
 * @date <07/14/2019>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  char return_val=0;

  /* Statistics and Printing Functions Go Here */
  return_val = sort_array(test, SIZE);
  return_val = print_array(test, SIZE);
  return_val = print_statistics(test, SIZE);

  return return_val;
}

unsigned char print_statistics(unsigned char *array, unsigned int size){
  unsigned char min,max,median, mean;

  min = find_minimum(array,size);
  printf("Minumum array value = %d\n",min);

  max = find_maximum(array,size);
  printf("Maximum array value = %d\n",max);

  mean = find_mean(array,size);
  printf("Mean array value = %d\n",mean);

  median = find_median(array,size);
  printf("Median array value = %d\n",median);

  return 0;
}
unsigned char sort_array(unsigned char *array, unsigned int size){
  unsigned int i, j,tmp;

  for (i=0; i<size; i++){
	//print_array(array, size);
    for (j=0; j<size; j++){
      //p

      if(array[j]<array[i]){
        tmp=array[i];
        array[i]=array[j];
        array[j]=tmp;
      }
      //printf("array[%d] = %d, array[%d] = %d \n",i,array[i],j,array[j]);
    }
    //printf("\n\n");
  }
  return 0;
}

unsigned char find_minimum(unsigned char *array, unsigned int size){
	return array[size-1];
}

unsigned char find_maximum(unsigned char *array, unsigned int size){
	return array[0];
}

unsigned char find_median(unsigned char *array, unsigned int size){
  unsigned short median=0;

  if(size % 2){
    median = (array[size/2] + array[(size+1)/2])/2;
	return median;
  }
  else
    return array[size/2];
}

unsigned char find_mean(unsigned char *array, unsigned int size){
  unsigned int i, mean=0;

  for (i=0; i<size; i++){
	  mean += array[i];
  }

  return mean/size;
}

unsigned char print_array(unsigned char *array, unsigned int size){
  unsigned int i;

  printf("\nArray = ");
  for (i=0; i<size; i++){
    printf("%d, ",array[i]);
  }
  printf("\n\n");

  return 0;
}
