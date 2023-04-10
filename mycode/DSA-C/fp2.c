#include <stdio.h>
#include <conio.h>
int main()
{
FILE *fp;
long n;
char c;
fp = fopen("RANDOM", "w");
while ((c = getchar()) != EOF)
{
putc(c, fp);
}
printf("No. of Characters Entered = %1d\n", ftell(fp));
fclose(fp);
fp = fopen("RANDOM", "r");
n = 0;
while (feof(fp) == 0)
{
fseek(fp, -1, 2);
printf("position of %c is %1d\n", getc(fp), ftell(fp));
n = n - 1;
}
return 0;
} 
