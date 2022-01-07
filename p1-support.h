#ifndef CMSC257_P1SUPPORT_INCLUDED
#define CMSC257_P1SUPPORT_INCLUDED
////////////////////////////////////////////////////////////////////////
//
//  File          	: p1support.h
//  Description    	: Headers of general-purpose utility functions 
//					we use for the 257 project #1.
//  Author					:
//	Date						:
//	Notes						:
////////////////////////////////////////////////////////////////////////
//	Add comments for each function below in the following format
///////////////////////////////////////////////////////////////////////
//
// 	Function     : display_array
// 	Description  : Displays the 10 elements of an unsigned int array on the same line.
// 
// 	Inputs       : an array of 10 integers
// 	Outputs      : void
////////////////////////////////////////////////////////////////////////
//
// 	Function     : display_array1
// 	Description  : displayed the 10 elements of an int array on the same line.
// 
// 	Inputs       : an array of 10 integers
// 	Outputs      : void 
////////////////////////////////////////////////////////////////////////
//
// 	Function     : swap_ints
// 	Description  : Swaps the two integers places to reverse their order.
// 
// 	Inputs       : int* a int *b
// 	Outputs      : void
////////////////////////////////////////////////////////////////////////
//
// 	Function     : bitwise_abs
// 	Description  : returns the absolute value of the integer inputted.
// 
// 	Inputs       : int mun
// 	Outputs      : int
////////////////////////////////////////////////////////////////////////
//
// 	Function     : bitwise_mod64
// 	Description  : this function returns the modulus of 64 using bitwise operations
// 
// 	Inputs       : int mun
// 	Outputs      : int
////////////////////////////////////////////////////////////////////////
//
// 	Function     : count_set_bits
// 	Description  : counts the number of 1s in the bitwise representation of a number
// 
// 	Inputs       : unsigned int num
// 	Outputs      : unsigned int
////////////////////////////////////////////////////////////////////////
//
// 	Function     : odd_or_even
// 	Description  : returns even or odd based on the number input
// 
// 	Inputs       : unsigned int
// 	Outputs      : int
////////////////////////////////////////////////////////////////////////
//
// 	Function     : reverse_bitwise
// 	Description  : reverses the bits of the number inputted using bitwise operations
// 
// 	Inputs       : unsigned int n
// 	Outputs      : unsigned int
////////////////////////////////////////////////////////////////////////
//
// 	Function     : bit_get
// 	Description  : extracts the specified bit from a given number.
// 
// 	Inputs       : int a int b
// 	Outputs      : int
/////////////////////////////////////////////////////////////////////////
//
// 	Function     : binary_string
// 	Description  : fills a text string with the binary representaion of a number
// 
// 	Inputs       : pointer to a string, unsigned int
// 	Outputs      : void
////////////////////////////////////////////////////////////////////////
// Functional Prototypes
////////////////////////////////////////////////////////////////////////

// This function prints out the array of integer values
void display_array(unsigned int*, int);

// Add other function prototypes
void swap_ints( int* a, int* b);
int bitwise_abs(int mun);
int bitwise_mod64(int mun);
unsigned int count_set_bits(unsigned int num);
int odd_or_even(unsigned int);
unsigned int reverse_bitwise(unsigned int n);
int bit_get(int a, int b);
void binary_string(char* binary, unsigned int b);

#endif // CMSC257_P1SUPPORT_INCLUDED
