#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[1000],rev[1000];
    int i,j,count=0;
    printf("String before reverse\n");
    scanf("%s",str);
    while(str[count]!='\0'){
        count++;
    }
    j=count-1;
    for(i=0;i<count;i++){
        rev[i]=str[j];
        j--;
    }
    printf("string after reversal is %s\n",rev);
    
    return 0;
}
