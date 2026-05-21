#include<stdio.h>
#include<string.h>

int main(){
    //char s[]="hello world";
//     int i=0;
//     s[0]= 'm' ;
//     s[1]=97;
//     while(s[i]!='\0'){
//     printf("%c",s[i]);
//     i++;

// }
//printf("%s", s);
//puts(s);
// puts( "hello my friends");
char s[23];
scanf("%[^\n]s",s);// only the first world consider
//gets(s);// use for full string consider
printf(" your input %s",s);

    return 0;

}