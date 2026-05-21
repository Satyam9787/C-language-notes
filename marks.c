#include<stdio.h>
int main(){
    int n;
    printf("enter the arr size");
    scanf("%d",&n);
    int mark [n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&mark[i]);
    }
    for(int i=0;i<n;i++){
        if(mark[i]<35)
        printf("%d ",i);

    }
    return 0;
}