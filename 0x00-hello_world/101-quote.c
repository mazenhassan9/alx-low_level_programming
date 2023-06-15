#include <unistd.h>
#include <string.h>
#include <sys/syscall.h>
/**
* main - Entry point
*
* Return: Always 1
*/
int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = strlen(msg);
syscall(SYS_write, STDERR_FILENO, msg, len);
return (1);
}
