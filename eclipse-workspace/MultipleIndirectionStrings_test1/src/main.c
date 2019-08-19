//
//  main.c
//  MultipleIndirectionStrings_test1
//
//  Created by Eric on 7/10/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <stdio.h>

//define array of character strings
#define LENGTH 3
char *words[LENGTH];  //defines a pointer to some strings. Allocates memory

int main(int argc, const char * argv[]) {
    
    //define the pointers
    char *pc;       //pointer to a character
    char **ppc;     //pointer to pointer of a character
    
    printf("The address of words is: %p\n", words);
    
    printf("The value of the first element of the words array is: %s\n", *words);
    
    //initialize the string array
    words[0] = "zero";
    words[1] = "one";
    words[2] = "two";
    
    //Loop without using pointers
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%s\n", words[i]);
    }
    
    printf("The address of words is: %p\n", words);
    
    printf("The value of the first element of the words array is: %s\n", *words);
    
    //Outer loop: each word in the words array
    //Inner loop: each character of each word in the words array.
    
    ppc = words;    //set the pointer to a pointer to the starting address of words. This will be used to increment through each word
    for (int i=0; i<LENGTH; i++)
    {
        ppc = words + i;            //first interation, ppc will be at words[0]. Second, ppc will be at words[1]. Third, ppc will be at words[2]
        pc = *ppc;                  //This sets the character pointer to the value of the first word in the words array. In the inner loop,
                                        //we will use this pointer to loop through each character in the
        while (*pc != 0)
        {
            printf("%c ", *pc);
            pc++;
        }
        printf("\n");
    }
    
    
    
    //first print out each word on a separate line
    
    //then loop through each character of each word, printing each character separated by a space
    
    
    
    return 0;
}
