#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool a  = false;

    printf("%d\n",a);

    exit(0);
}

int func(float f)
{
    if(f < 0)
    {
        return 0;
    }
    else if (f == 0)
    {
        return 1;
    }
    
}