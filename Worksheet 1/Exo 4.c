#include <stdio.h>

int main()
{
    int month;

    printf("Enter a month number: ");
    scanf("%d", &month);

    switch (month)
    {
    case 12:
    case 1:
    case 2:
        printf("Hiver\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("été\n");
        break;
    case 3:
    case 4:
    case 5:
        printf("printemps\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("automne\n");
        break;
    default:
        printf("Month doesn't exist !\n");
        break;
    }

    return 0;
}