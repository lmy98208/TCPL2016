/* µœ÷√∞≈›≈≈–Ú°£*/

#include<stdio.h>
void sort(int *p,int n)
{
    int i,j,temp;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if(p[j]>p[j+1])
            {
                temp=p[j+1];
                p[j+1]=p[j];
                p[j]=temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Please input a n(n>1).\n");
    scanf("%d",&n);
    int a[n];
    printf("Please input %d numbers.\n",n);
    int i,*p=&a[0];
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort (p,n);
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}