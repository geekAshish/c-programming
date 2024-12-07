#include <stdio.h>

// function prototype
void printMyName();

// with Arguments & with return value
int sum(int a, int b) {
    return a + b;
}

// with Arguments & without return value
void printstar(int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    
}

// without Arguments & with return value
int takenumber() {
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    return i;
}


// without Arguments & without return value
int exe() {
    int ashish = 56;
    printf("%d", ashish);
}



int main(int argc, char const *argv[])
{
    int a, b, c, d;
    a = 5;
    b = 50;
    c = sum(a, b);

    // d = takenumber();
    // printf("The entered number is %d", d);

    // printf("%d", c);
    // printstar(10);

    exe();
    printMyName();


    return 0;
}

void printMyName() {
    printf("Ashish Kushwaha");
}