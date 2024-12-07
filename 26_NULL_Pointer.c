#include <stdio.h>

int main()
{
    int a = 34;
    // int * ptr = &a;
    int * ptr = NULL;
    printf("The address of a is %d\n", ptr);

    /*
    // Your system will crash for this
    int * ptr = NULL;
    printf("The value of a is %d\n", *ptr);
    // For avoiding this 
    */

   if ( ptr != NULL)
   {
       printf("The address of a is %d\n. It can be dereferenced", *ptr);
   } else {
       printf("The pointer is a NULL pointer and it con'nt be dereferenced");
   }
   


    return 0;
}