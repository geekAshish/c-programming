#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    scanf("%d", &age);
    printf("Your age is %d\n", age);
    if (age>=20)
    {
        printf("You can join the party");
    }
    else if(19>=age>=10) {
        printf("You are under 20 you can join our baby party.");
    }
    else {
        printf("You are under 20 you can not join our party.");
    }

    
    return 0;
}
