//Minimum maximum sum
#include<stdio.h>
int main()
{
    long long arr[5];
    long long sum=0;
    for(int i=0;i<5;i++)
    {
        scanf("%lld",&arr[i]);
        sum+=arr[i]; //sum of all integers
    }
    //finding smallest and biggest number
    long long smallest=arr[0];
    long long biggest=arr[0];
    for(int i=1;i<5;i++)
    {
        if(smallest>arr[i])
            smallest=arr[i];
        if(biggest<arr[i])
            biggest=arr[i];
    }
    printf("%lld %lld",sum-biggest,sum-smallest);
}