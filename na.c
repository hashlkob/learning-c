// my first c program

#include <stdio.h>

int main (void) {
    char n[32];
    int a; 
    
    printf("type your age and your name\n");
    scanf("%d %31s", &a, n);
    printf("my age is %d and my name is %s\n", a, n);
    return 0;
} 
