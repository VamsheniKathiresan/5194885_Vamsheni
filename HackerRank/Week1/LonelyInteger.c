#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //sorting arr
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //finding the element with no pair
    int found=0;
    for(int i=0;i<n-1;i+=2)
    {
        if(arr[i]!=arr[i+1]){
            printf("%d",arr[i]);
            found=1;
            break;
        } 
        }
        if(!found)
    {
        printf("%d",arr[n-1]);
    }
    }
    