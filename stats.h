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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Prints array statistics>
 *
 * <Prints the maximum, minimum, mean, and median of the input array>
 *
 * @param <unsigned char *array> <Pointer to input array of unsigned characters>
 *
 * @return <void>
 */

unsigned char print_statistics(unsigned char *array, unsigned int size);

/**
 * @brief <Prints input array>
 *
 * <Given an array of data and a length, prints the array to the screen>
 *
 * @param <unsigned char *array> <Pointer to input array of unsigned characters>
 * @param <unsigned int size> <Total number of elements in the input array>
 *
 * @return <unsigned char value - Success, if zero.
 *                              - Fail to print statistics, if non zero>
 */

unsigned char print_array(unsigned char *array, unsigned int size);


/**
 * @brief <Finds median of input array>
 *
 * <Given an array of data and a length, returns the median value>
 *
 * @param <unsigned char *array> <Pointer to input array of unsigned characters>
 * @param <unsigned int size> <Total number of elements in the input array>
 *
 * @return <unsigned char value - Success, if zero.
 *                              - Fail to print array, if non zero>
 */

unsigned char find_median(unsigned char *array, unsigned int size);

/**
 * @brief <Finds mean of input array>
 *
 * <GGiven an array of data and a length, returns the mean>
 *
 * @param <unsigned char *array> <Pointer to input array of unsigned characters>
 * @param <unsigned int size> <Total number of elements in the input array>
 *
 * @return <unsigned char value - Success, if zero.
 *                              - Fail to find median, if non zero>
 */

unsigned char find_mean(unsigned char *array, unsigned int size);

/**
 * @brief <Finds maximum of input array>
 *
 * <Given an array of data and a length, returns the maximum>
 *
 * @param <unsigned char *array> <Pointer to input array of unsigned characters>
 * @param <unsigned int size> <Total number of elements in the input array>
 *
 * @return <unsigned char value - Success, if zero.
 *                              - Fail to find mean, if non zero>
 */

unsigned char find_maximum(unsigned char *array, unsigned int size);

/**
 * @brief <Finds minimum of input array>
 *
 * <Given an array of data and a length, returns the minimum>
 *
 * @param <unsigned char *array> <Pointer to input array of unsigned characters>
 * @param <unsigned int size> <Total number of elements in the input array>
 *
 * @return <unsigned char value - Success, if zero.
 *                              - Fail to find minimum, if non zero>
 */

unsigned char find_minimum(unsigned char *array, unsigned int size);

/**
 * @brief <Sorts input array>
 *
 * <Given an array of data and a length, sorts the array from largest to smallest.
 * The zeroth Element should be the largest value, and the last element (n-1)
 * should be the smallest value.>
 *
 * @param <unsigned char *array> <Pointer to input array of unsigned characters>
 * @param <unsigned int size> <Total number of elements in the input array>
 *
 * @return <unsigned char value - Success, if zero. Fail to sort, if non zero>
 */

unsigned char sort_array(unsigned char *array, unsigned int size);

#endif /* __STATS_H__ */
