#include<stdio.h>
int main()
{
    int days_left;
    char is_opened;


    printf("If the bottle has been opened or not?(y/n):");
    scanf("%c", &is_opened);

    printf("Please enter the amount of days left:");
    scanf("%d", &days_left);

    if(is_opened == 'y')
        days_left -= 3;

    if(days_left > 0)
    {
        printf("\nIt is safe to drink.");
    }
    else
    {
        printf("\nIt is expired.");
    }

    return 0;
}
