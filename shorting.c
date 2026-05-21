#include<stdio.h>

int main(){
    int a[8],i,flag=0,n, item;
    printf("enter arr number");
    scanf("%d",&n);
    printf("enter arr element ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter serching element");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(item ==a[i]){
        flag=1;
        break;
        }
    }
    if (flag==1){
        printf("%d is present and position %d ",item,i+1);
    }
    else
    printf("not present");
    return 0;
}