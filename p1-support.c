#include "p1-support.h"
#include <stdio.h>
#include <string.h>

////////////////////////////////////////////////////////////////////////
//
//  File          	: p1support.c
//  Description    	: This is a set of general-purpose utility functions 
//					we use for the 257 project #1.
//  Author					: Adam Harms
//	Date						: 3/12/2021
//	Notes						:


////////////////////////////////////////////////////////////////////////
// Function Definitions
////////////////////////////////////////////////////////////////////////

//function definitions as decribed in the project manual 

//Shortly describe function here
void display_array(unsigned int* arr, int size){
	int i;
	for(i =0; i<size; i++){
	printf("%10d", arr[i]);
	}
	printf("\n");
}	

//Additional function definitions for helper functions


void swap_ints(int* first, int* second){
	int i;	
	for(i=0;i<5;i++){

		*second = *first ^ *second;
		*first = *first ^ *second;
		*second = *first ^ *second;
	first += 1;
	second -= 1;
	}
}

int bitwise_abs(int mun){
	if(mun>0){
	return mun;
	}
	return ~mun +1;
}
int bitwise_mod64(int mun){
	if(mun > 64){
	return mun & 63;	
	}
	else{
	return mun;
	}
}

unsigned int count_set_bits(unsigned int num){
	int counter =0;
	while(num){
	counter +=  num&1;
	num>>=1;
	}

	return counter;

}
int odd_or_even(unsigned int num){
 if( num &1){
	return 0;
}
	else{
	return 1;
	}
}
unsigned int reverse_bitwise(unsigned int n){
	unsigned int reverse =n;
	unsigned int size = 31;
	n >>=1;
	while(n){
	reverse <<=1;
	reverse |= n &1;
	n >>= 1;
	size--;
	}
	reverse<<=size;

	return reverse;
}
int bit_get(int a, int b){
	a = (a >> b);
	return a & 1;	
}
void binary_string(char* binary, unsigned int b){
	int i;
	binary[0] = '0';
	binary[1] = 'b';
	for(i=2;i<34;i++){
	int bit = bit_get(b,33-i);
	if(bit == 1){
	binary[i] = '1';
	}
	else{
	binary[i] = '0';
	}
	}
	binary[34] = '\0';	
	}	



