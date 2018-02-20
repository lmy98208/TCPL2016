/*ÊµÏÖ½Ì²Ä P145 Àý 6.13¡£*/

#include<stdio.h>
#define row 3
#define col 4
int main()
{
    int matrixA[row][col],matrixB[col][row];
    int i,j;
    printf("input A %d*%d\n",row,col);
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&matrixA[i][j]);
    }
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            matrixB[j][i]=matrixA[i][j];
    }
    printf("TRANSPORT MATRIX B %d*%d\n",col,row);
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
            printf("%8d",matrixB[i][j]);
        printf("\n");
    }
    return 0;
}