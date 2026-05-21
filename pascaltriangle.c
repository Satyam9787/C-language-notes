#include<stdio.h>
int factorial(int x){
    int fact =1;
    for(int i= 2; i <=x;i++){
        fact=fact*i;
        return fact;
    }
}
int main (){
    int n, r;
    printf("%d%d",&n,&r);
    // int ncr=factorial(n)/factorial(r)*factorial(n-r);
    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);
    int ncr= nfact/(rfact*nrfact);

    printf("%d",ncr);
    return 0;

}