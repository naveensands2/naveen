#include <stdio.h>
#include <conio.h>
int main()
{
    int;

    printf("Enter a number: ");
    scanf("%d", &number);
    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return ;
}
