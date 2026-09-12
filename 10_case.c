#include<stdio.h>
int main()
{
    int choice;
    printf("Enter choice (1-apple, 2-boy, 3-cat, 4-exit,): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("apple");
            break;
        case 2:
            printf("boy");
            break;
        case 3:
            printf("cat");
            break;
        case 4:
            printf("exit");
            break;
        default:
            printf("Wrong choice");
    }
    return 0;
}
