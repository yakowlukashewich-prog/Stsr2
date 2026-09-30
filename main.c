#include <stdio.h> #include <string.h>

int main(int argc, char **argv)
{
char first[255], last[255]; printf("Enter your first name: "); fgets(first, 255, stdin);
askname(first, last);
printf("Hello, %s %s!\n", first, last); return 0;
}
