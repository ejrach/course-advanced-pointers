//
//  main.c
//  MultipleIndirectionStrings_test2
//
//  Created by Eric on 7/10/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <stdio.h>

#define LENGTH 3
char *words[LENGTH];

int main(int argc, const char * argv[]) {
    
    char *pc;       //pointer to a character
    char **ppc;     //pointer to a pointer
    
    //initializing the words character array
    words[0] = "zero";
    words[1] = "one";
    words[2] = "two";
    
    
    ppc = words;        //we are pointing to a pointer, aka "words", which is a pointer
    
    for (int i=0; i<LENGTH; i++)
    {
        ppc = words + i;    //increments the pointer to the words array
        pc = *ppc;          //setting the pointer to the char to the value of words[0], words[1], etc...
        while (*pc != 0)
        {
            printf("%c ",*pc);
            pc++;
        }
        printf("\n");
        
    }
    
    
    return 0;
}
