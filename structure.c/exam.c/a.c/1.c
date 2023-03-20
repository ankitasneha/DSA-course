
#include<stdio.h>

int main()
{
    char name[100], copy[100];

    int i, k = 0;
    printf("Enter your name: ");
    scanf("%[^\n]s",name);              //TAKING INPUT FROM USER
    for (i = 0 ; name[i] != '\0' ; i++)
        k++;                            //COUNTING THE LENGTH OF NAME

    for (i = 0 ; name[i] != '\0' ; i++)     //REPLACING THE SPACE WITH K NUMBER OF SPACES
    {
        if (name[i] == ' ')
        {
            for (int j = 0 ; j < k ; j++)
                name[i] = ' ';
        }
    }
    
    for (i = 0 ; name[i] != '\0' ; i++)         //REPLACING VOWELS WITH NULL CHARACTER
    {
        if (name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U' || name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
            name[i] = '\0';
    }
    for (i = 0 ; i < 100 ; i++)                 //COPYING THE MODIFIED NAME TO NEW ARRAY FOR DISPLAYING
    {
        copy[i] = name[i];
    }

    printf("%s",copy);                          //DISPLAYING THE RESULT
    return 0;
}
