#include <stdio.h>
#include <stdio.h>

int main()
{
    char str[123];
    puts("enter the string");
    scanf("%[^\n]s", str);
    // puts(" the str size is");
    int size = 0;
    int i = 0;
    while (str[i] != '\0')
        
    {
        size++;
        i++;
    }
    //printf("%d\n", size);
    for (int k=0 ,j=size-1; k<= j;k++,j--)
    {  
       char temp =str[k];
      
       str [k]=str[j];
       str[j]=temp;
    }
    puts("the reseve string is");
    puts(str); 

    return 0;
}