#include <stdio.h>
int main()
{
    int choice, num, i, prime;

    do
    {
        printf("\n1. Even/Odd");
        printf("\n2. Prime");
        printf("\n3. Square");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 2 == 0)
                {
                    printf("Even");
                }
                else
                {
                    printf("Odd");
                }
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num <= 1)
                {
                    printf("Not Prime");
                }
                else
                {
                    prime = 1;

                    for (i = 2; i < num; i++)
                    {
                        if (num % i == 0)
                        {
                            prime = 0;
                            break;
                        }
                    }

                    if (prime == 1)
                    {
                        printf("Prime");
                    }
                    else
                    {
                        printf("Not Prime");
                    }
                }
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);

                printf("Square = %d", num * num);
                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid choice");
        }

    } while (choice != 4);

    return 0;
}
