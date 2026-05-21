 #include<stdio.h>

int main(){
    float a , v ,c;
    int input;
    printf("enter 1 for add and 2 for subtrac 3 for multiply 4 for divide ");
    scanf("%d",&input);
    printf("enter the value A and B");
    scanf("%f %f",&a,&v);
    switch (input)
    {
    case 1:
    c=a+v;
    printf("your addition =%f",c);

        break;
    case 2:
    c=a-v;
    printf("your subtra is %f",c);
    break;
    case 3 :
    c = a*v;
    printf("your multiply is %f",c);
    break;
    case 4 :
    c=a/v;
    printf("your divisan is %f",c);
    break;
    default:
    printf("wrong choice");

        break;

    }
    return 0;
}