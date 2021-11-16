#include "stdio.h"
#include "string.h"

void rotatedStr(char *arr, int n, int test)
{
    char choice, str[20];
    int j = 0, val, k = 0, idx = 0;

    while (j < test)
    {

        scanf("\n%c%d", &choice, &val);
        val %= n;
        if (choice == 'L')
        {
            // scanf("%d",&val);
            str[k] = arr[idx = ((idx + val) % n)];
            k++;
            //  printf("New Char: %c\n",str);
        }
        else if (choice == 'R')
        {
            // scanf("%d",&val);

            str[k] = arr[idx = (idx + (n - val)) % n];
            k++;
        }
        j++;
    }

    str[k] = '\0';
    // return str;
    printf("New String: %s", str);
}

int main()
{
    int test, n;
    char arr[20];
    printf("Enter String: ");
    scanf("%[^\n]%*c", arr);

    n = strlen(arr);
    // printf("%d",n);
    // printf("%s",arr);
    printf("Enter Test Cases: ");
    scanf("\n%d", &test);
    // printf("%d",test);

    // printf("New String: %s",rotatedStr(arr,n,test));
    rotatedStr(arr, n, test);
    return 0;
}
