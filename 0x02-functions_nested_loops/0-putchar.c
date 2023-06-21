#include <unistd.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (Success) 
*/
int main(void)
{
char *str = "_putchar\n";
int i;
for (i = 0; str[i] != '\0'; i++)
{
/* Use the write() function to print each character */
write(1, &str[i], 1);
}

	return (0);
}
