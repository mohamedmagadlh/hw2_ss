#include <stdio.h>
#include "my_mat.h"
#define True 1
#define false 0
#define N 10
int main()
{
    char ch;
    int res, i, j;

    while (ch != 'D')
    {    


        scanf("%c", &ch);

        if (ch == 'A')
        {
            NEW_INPUT();
        }
         if (ch == 'B')
        {
            scanf("%d %d", &i, &j);
            res = Exists_PATH(i, j);
            if (res == -1)
                printf("False\n");
            else
                printf("True");
        }
         if (ch == 'C')
        {
            scanf("%d", &i);
            scanf("%d", &j);
            printf("%d\n", floydWarshall(i, j));
        }
    }
    return 0;
}
