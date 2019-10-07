#include <stdio.h>
#include <unistd.h>
#define MAXLINE 80 /* The maximum length command */
int main(void)
{
    char *args[MAXLINE / 2 + 1]; /* command line arguments */
    int shouldrun = 1;           /* flag to determine when to exit program */
    while (shouldrun)
    {
        printf("osh>");
        fflush(stdout);
        /**
* After reading user input, the steps are:
* (1) fork a child process using fork()
* (2) the child process will invoke execvp()
* (3) parent will invoke wait() unless command included &
*/
    }
    return 0;
}