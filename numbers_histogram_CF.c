#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch=='+')
    {
        int num,starptr;
        scanf("%d",&num);

        for (int i = 1; i <= num; i++)
        {
            scanf("%d",&starptr);
            for (int j = 1; j <= starptr; j++)
            {
                printf("+",j);
            }
            printf("\n");
        }
    }
    else if (ch=='-')
    {
        int num,starptr;
        scanf("%d",&num);

        for (int i = 1; i <= num; i++)
        {
            scanf("%d",&starptr);
            for (int j = 1; j <= starptr; j++)
            {
                printf("-",j);
            }
            printf("\n");
        }
    }
    else if (ch=='*')
    {
        int num,starptr;
        scanf("%d",&num);

        for (int i = 1; i <= num; i++)
        {
            scanf("%d",&starptr);
            for (int j = 1; j <= starptr; j++)
            {
                printf("*",j);
            }
            printf("\n");
        }
    }
    else if (ch=='/')
    {
        int num,starptr;
        scanf("%d",&num);

        for (int i = 1; i <= num; i++)
        {
            scanf("%d",&starptr);
            for (int j = 1; j <= starptr; j++)
            {
                printf("/",j);
            }
            printf("\n");
        }
    }

    return 0;
}
