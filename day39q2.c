#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10];
    int i, j;
    int distinct = 1;

    scanf("%d %d", &r, &c);

    // Input matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check diagonal elements
    for (i = 0; i < r && i < c; i++)
    {
        for (j = i + 1; j < r && j < c; j++)
        {
            if (a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
            break;
    }

    // Print result
    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
} 