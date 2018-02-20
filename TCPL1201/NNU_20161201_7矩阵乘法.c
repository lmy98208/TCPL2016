/*使用二维数组实现两个矩阵的乘法运算。*/

#include<stdio.h>
#include<string.h>
int main()
{
    int col1,row1,col2,row2;
    int i,j;
    printf("Please int two numbers m n(m*n).\n");
    scanf("%d %d",&row1,&col1);
    int a[row1][col1];
    printf("Please input %d numbers.\n",col1*row1);
    for (i=0;i<row1;i++){
        for (j=0;j<col1;j++)
            scanf("%d",&a[i][j]);
    }
    printf("A\n");
    for (i=0;i<row1;i++){
        for (j=0;j<col1;j++)
            printf("%8d",a[i][j]);
        printf("\n");}
    //a
    row2=col1;
    printf("Please input a num n(%d*n).\n",row2);
    scanf("%d",&col2);
    printf("Please input %d numbers.\n",col2*row2);
    int b[row2][col2];
    for (i=0;i<row2;i++){
        for(j=0;j<col2;j++)
            scanf("%d",&b[i][j]);
    }
    printf("B\n");
    for (i=0;i<row2;i++){
        for(j=0;j<col2;j++)
            printf("%8d",b[i][j]);
    printf("\n");}
    //b
    int c[row1][col2],p=0;
    memset(c,0,row1*col2*sizeof(int));
    for (i=0;i<row1;i++){
        for (j=0;j<col2;j++){
                p=0;
//printf("%d\n",p);
            while (p<col1){
            c[i][j]+=a[i][p]*b[p][j];
//printf("a %d b %d p %d c %d\n",a[i][p],b[p][j],p,c[i][j]);
            p++;
            }
        }
    }//c
    printf("C=A*B\n");
    for (i=0;i<row1;i++){
        for (j=0;j<col2;j++)
            printf("%8d",c[i][j]);
        printf("\n");}
//  printf("%d %d %d %d\n",c[0][0],c[1][1],c[0][1],c[1][0]);
        return 0;
}