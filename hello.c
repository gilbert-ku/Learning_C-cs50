// #include <stdio.h>

// int main(void)
// {
//     printf("hello world. \n");
    
// }

#include <stdio.h>

int main(void)
{
    char name[100];  // maximum length of 99 characters for the name

    printf("What's your name? ");
    scanf("%99s", name);  

    printf("Hello %s.\n", name);

    return 0;
}


