#include <stdio.h>
#include <unistd.h>
#include <limits.h>
/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid, my_ppid, my_pidmax;

    my_pid = getpid();
    my_ppid = getppid();
    my_pidmax = INT_MAX;
    printf("%u\n", my_pid);
    printf("%u\n", my_ppid);
    printf("%u\n", my_pidmax);
    return (0);
}
