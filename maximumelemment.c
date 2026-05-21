#include<stdio.h>

int main(){
    int n;
    printf("enter the arrr size");
    scanf("%d",&n);
    int arr[n];
   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }int max= arr[0];
    for(int i=1;i<n;i++){
    if(max<arr[i]){
        max=arr[i];//min bala bhi code bilkul same lika jaysega onlu confition mai ">" sing lagega

    }
}printf("the maximun number is%d",max);

    return 0;
}
 