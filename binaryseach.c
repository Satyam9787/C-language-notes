#include<stdio.h>

int main(){
    int a[9],i, mid, fisrt=0,end ,item,n;
    printf("enter the arr element");
    scanf("%d",&n);
    printf("enter arr elmenet");
   for(i =0;i<n;i++){
    scanf("%d",&a[i]);
   }
   printf("enter item");
   scanf("%d",&item);
     end=n-1;
     mid=(fisrt+end)/2;
   while (fisrt<=end)
   
   { if(a[mid]<item){
    fisrt=mid+1;
    mid=(fisrt+end)/2;
   }
   else if(a[mid]==item)
   {
    printf("the item is present %d and pasition %d ",item ,i+1);
   }
   else 
   {
    end=mid-1;
    mid=(fisrt+end)/2;
   }

   }
   if(fisrt>end)
   printf("\nthe item is not present here gand maro");
    
   
   

    return 0;
}