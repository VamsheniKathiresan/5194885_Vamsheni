#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    int d,m;
    scanf("%d",&d);
    scanf("%d",&m);
    int num_of_ways=0;
    for(int i=0;i<=n-m;i++)
    {
        int sum=0;
        int limit=i+m;
        int j=i;
        while(j<limit)
        {
            sum+=s[j];
            j++;
        }
        if(sum==d)
            num_of_ways+=1;
    }
    printf("%d",num_of_ways);
}
