//
//  main.c
//  AllocatingMemory
//
//  Created by Eric on 7/10/19.
//  Copyright © 2019 Eric. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// very simple allocation of memory and changing something in the newly allocated memory
int main(int argc, const char * argv[]) {
    
    char *s;            //define a pointer to a character
    int stringsize;
    
    stringsize = sizeof("hello");
    
    printf("size of 'hello' is %d\n", stringsize);
    
    // now allocate some memory (just enough) of sufficient size to hold the string
    //Note the cast (char*). This is required because malloc always returns a generic pointer type of 'void*'
    s = (char*)malloc(stringsize);  //allocates just enough memory for the string to be copied into. Result is address that s points to
    if (s == NULL)
    {
        printf("Malloc failed!\n");
        exit(0);
    }
    
    //now copy the string into the newly allocated memory
    strncpy(s, "hello", stringsize);
    
    //and change the first character (just to show we can)
    printf("s is %s\n", s);
    s[0] = 'c';
    printf("s is now %s\n", s);
    
    return 0;
}
