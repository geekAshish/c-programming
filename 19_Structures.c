#include <stdio.h>
#include <string.h>

// Structures are user define Data Type

struct gameName
{
    char name[30];
    int point;
} COD, GTAV, volrant;

// Or can use after
// struct gameName COD, GTAV, volrant;

int main()
{
    // struct gameName COD, GTAV, volrant;
    // struct gameName SpiderMan;

    COD.point = 89767;
    GTAV.point = 5656;
    volrant.point = 56565;

    strcpy(COD.name, "Call of duty");
    strcpy(GTAV.name, "Grand Theft Auto V");
    
    printf("%d\n",COD.point);
    printf("%s\n", COD.name);
    printf("%s\n", GTAV.name);

    return 0;
}