//8
#include <stdio.h>
#include <string.h>
int main() {
    char str1[1024], str2[1024];
    int n;
    //8.2
    printf("enter n: ");
    scanf("%d", &n);
    printf("string #1: ");
    scanf("%s", &str1);
    printf("string #2: ");
    scanf("%s", &str2);
    strncat(str1, str2, n);
    printf("Concatenated: %s \n", str1);
    //8.5
    strcpy(str1, str2);
    printf("Copy str2 in str1: %s \n", str1);
    //8.6
    strncpy(str1, str2, n);
    printf("Copy str2 in str1: %s \n", str1);
    //8.9
    char chr;
    char *second_chr;
    printf("char : ");
    scanf("%s", &chr);
    second_chr=strrchr (str1, chr);
    printf("%d \n", second_chr-str1+1);
    //8.12
    char str12_1[1024], str12_2[1024];
    printf("string #12_1: ");
    scanf("%s", &str12_1);
    printf("string #12_2: ");
    scanf("%s", &str12_2);
    printf("\n");
    printf("First %d items don't contain this simbol\n",strcspn(str12_1,str12_2));
}