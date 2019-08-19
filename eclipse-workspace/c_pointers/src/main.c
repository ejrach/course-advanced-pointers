/*
 ============================================================================
 Name        : c_pointers.c
 Author      : EricR
 Version     :
 Copyright   : Your copyright notice
 Description : Additional basic pointer exercises
 ============================================================================
 */

// https://www.youtube.com/watch?time_continue=5&v=wxCxB2aNouA

#include <stdio.h>
#include <stdlib.h>

// Pointer is a reference to an address
// defining "int *p"      : we are defining a pointer to an integer value
// All this happens on the stack

// Heap is memory managed by the OS. We use this when there is memory that is important
// that we need. malloc is used in this case
// We use 'free' to free up the memory after we execute the code we need.


// Instead of making a copy of the data for this function call, we are passing
// by reference.
void manipulates(int *ptr)
{
	*ptr = 4;
}


int main()
{

	// ***********************************************
	// All of this memory allocation happens on the stack
	// ***********************************************
	int a;			// 4 bytes
	a = 2;

	int *p = &a;	// declare a integer pointer and point it to the address of a
	int x = *p;		// dereference the pointer p and assign the value that it's pointing to, to x

	printf("a: %d, p: %p, x: %d\n", a, p, x);

	manipulates(p);
	printf("a: %d, p: %p, x: %d\n", a, p, x);

	// ***********************************************
	// This memory allocation happens on the heap
	// ***********************************************
	int *s = malloc(sizeof(int));

	//We should check if the memory allocation worked
	if (s == NULL)
	{
		return -1;
	}

	// We dereference the pointer value and assign it a value.
	*s = 4;

	printf("Heap s: %d, s: %p \n", *s, s);

	// If we don't free up the memory we allocated, we leak memory on the heap
	free(s);

	return 0;
}
