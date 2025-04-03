#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define COUNT 1024
int main(int argc, char* argv[argc])
{
        if(argc != 1)
        {
                printf("Usage: %s\n",argv[0]);
                exit(-1);
        }
        char buf[COUNT];
        if(getcwd(buf, COUNT) != NULL)
        {
                if(write(1, buf, strlen(buf)) < 0)
                {
                        printf("error: cant write in stdout\n");
                        exit(-2);
                }
                printf("\n");
        }
        else
        {
                printf("error: cant read current path\n");
                exit(-3);
        }
        return 0;
}
