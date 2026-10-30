#include <stdio.h>
#include <string.h>

void swapStrings(char *p1, char *p2){
    char temp[50];

    strcpy(temp, p1);
    strcpy(p1, p2);
    strcpy(p2, temp);
}

int main(){
    char str1[50], str2[50];

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    
    printf("Strings before swapping:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    swapStrings(str1, str2);

    printf("Strings after swapping:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    return 0;
}