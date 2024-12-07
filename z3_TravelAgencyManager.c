#include <stdio.h>
#include <string.h>

struct TravelAgencyManager
{
    char name[100];
    int DL;
    char route[100];
    int distance;
} a;

int functionName() {
        for (int i = 1; i < 4; i++)
    {

        char nameA[100];
        int DLNO;
        char routeA[100];
        int distanceA;

        printf("Please enter your Details Driver no. %d\n", i);

        printf("Name: ");
        scanf("%s", &nameA);
        strcpy(a.name, nameA);

        printf("Route: ");
        scanf("%s", &routeA);
        strcpy(a.route, routeA);

        printf("Driving License No.: ");
        scanf("%d", &DLNO);
        a.DL = DLNO;

        printf("Kms: ");
        scanf("%d", &distanceA);
        a.distance = distanceA;

        printf("Hey, %s. your Diriving License no. %d. you go to %s for %d\n\n", a.name, a.DL, a.route, a.distance);
    }

    return 0;
}

int main()
{
    functionName();
    return 0;
}