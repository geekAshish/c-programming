#include <stdio.h>
// #include "youFileName.c"


int myFunc() {
    // int globalValue = 44; // if we comment this sum will be garbage value
    // static int globalValue; // if we comment this sum will be 0
    extern int globalValue; // and if we add extern keyword in front of this, it'll get the global variable
    return globalValue;
}

int globalValue = 5550;

int main()
{
    // Declaration - Telling the compiler about the variable ( no space reserved )
    // Definition - Declaration + space reserved

    // 1. Auto Storage Class - Local Variables are Auto Storage Class
    // int someValue = 4;
    // auto int autoSomeValue = 6;
    // printf("this is Auto Storage Class both are same %d, %d", someValue, autoSomeValue);

    // 2. Can Include another c file : #include "myFile.c";

    // 3. 
    // printf("This is global Variable %d", globalValue);

    // 4. extern keyword
    int sum = myFunc();

    printf("This is sum value %d\n", sum);
    printf("This is sum value with extern keywords %d\n", sum);
    
    // 5. register storage --> storage in CPU
    // if register not possible, automatically store it like auto storage class
    // register int sum = myFunc();

    return 0;
}
