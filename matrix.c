#include<stdio.h>
int main()
{
    int disp[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter value for disp[%d][%d]:",i,j);
            scanf("%d",&disp[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",disp[i][j]);
            if(j==2)
                printf("\n");
        }
    }
return 0;
}
