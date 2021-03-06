////////////////////////////////////////////////////////////////////////
//
//  File           : cmsc257-s20-p1.c
//  Description    : This is the main source code for for the first 
//					 project of CMSC257.  
//					 See the related assignment page for details.
//
//   Author        : Adam Harms 
//   Last Modified : 3/10/2021
//

// Include Files
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Project Includes
#include "p1-support.h"

#define current int_array2[i]

// Functions

///////////////////////////////////////////////////////////////////////
//
// Function     : main
// Description  : The main function for the CMSC257 project #1
// 
// Inputs       : argc - the number of command line parameters
//                argv - the parameters
// Outputs      : 0 if successful test, -1 if failure

int main(int argc, char *argv[]) {

	// Local variables
	int int_array1[10];
	unsigned int uint_array1[10], uint_array2[10], uint_array3[10];
	int i;
	//Add more local variables here as needed

	//Checking if there are less than 10 inputs 
	if (argc < 11)
	{   
		//Exit if there are less than 10 inputs
		printf("Exiting the program, missing input");
		return 0;	
	}


	// Step a - Read in the integer numbers input at 
	// the time of exeution and save them into int_array1
	
 	 for(i=1; i<11; i++)
	{
	  int_array1[i-1] = atoi(argv[i]);//converting input to an integer

	}
	// Step b - Reverse the order of array elements in int_array1 
	//           using swap function. 
	
	int* end = &int_array1[9];
	swap_ints(int_array1,end);
	
	// Step c - Convert numbers in int into positive values by taking their 
	//           absolute values and save them in uint_array1. 
	// Print all numbers in a single line using display_array function
	for(i=0; i<10;i++){
	uint_array1[i] = bitwise_abs(int_array1[i]);
	}
	display_array(uint_array1,10);


	// Step d - Convert these positive integers to numbers 
	//           in the range 0,…,64 by implementing the  mod operation
	//           save them into uint_array2. 
	// Print all numbers in a single line using display_array function
	for(i=0; i<10;i++){
	uint_array2[i] = bitwise_mod64(uint_array1[i]);
	}
	display_array(uint_array2,10);


	// Step e - for each integer in uint_array1 print: 
	//           number, number of set bits, even or odd
	for(i=0; i<10; i++){

	if((odd_or_even(uint_array1[i]))==1)	
	printf("[Number: %d, # of 1 bits: %d, even]", uint_array1[i], count_set_bits(uint_array1[i]));
	
	if((odd_or_even(uint_array1[i]))==0)	
	printf("[Number: %d, # of 1 bits: %d, odd]", uint_array1[i], count_set_bits(uint_array1[i]));
	
	printf("\n");		
	}
	// Step f - Reverse bits of each element of the uint_array2 and 
	// save them into uint_array3
	for(i=0; i<10; i++){
	uint_array3[i] = reverse_bitwise(uint_array2[i]);
	}	


	// Step g - Print each element of int_array1, uint_array2 and uint_array3 
	// in a separate line along with 
	// binary representation of each of the numbers 
	//using binary_string function.
	for(i=0;i<10;i++){	
	char binary[35];
	binary_string(binary,uint_array3[i]); 
	
	printf("[Number: %u, mod64: %u, reversed: %u, %s]", uint_array1[i], uint_array2[i], uint_array3[i], binary);
	printf("\n");
	}
	

	// Return successfully
	return(0);
}
