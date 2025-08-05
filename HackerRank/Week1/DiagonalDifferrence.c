#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int matrix[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int j=n-1;
    int primary_diag_sum=0;
    int secondary_diag_sum=0;
    //adding primary and secondary diagonal elements
    for(int i=0;i<n;i++)
    {
        primary_diag_sum+=matrix[i][i];
        secondary_diag_sum+=matrix[i][j-i];
    }
    printf("%d",abs(primary_diag_sum-secondary_diag_sum));
}