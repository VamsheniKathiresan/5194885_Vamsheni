#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos_count=0;
    int neg_count=0;
    int zero_count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
            pos_count+=1;
        else if (arr[i]<0)
            neg_count+=1;
        else
            zero_count+=1;
    }
    printf("%.6f\n",(float)pos_count/size);
    printf("%.6f\n",(float)neg_count/size);
    printf("%.6f\n",(float)zero_count/size);
}