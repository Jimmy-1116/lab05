#include <stdio.h>
#include <string.h>
void copy(char *psource, char *ptarget, unsigned num_char)
{
    unsigned count = 0;
    while (*psource != '\0' && num_char > count);
    {
        *psource = *ptarget;
        count++;
        psource++;
        ptarget++;
    }
    *ptarget = '\0';

    // TODO: write your code here
}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    unsigned count = 0;
    while (*psrc1 != '\0' && buffer_size -1 > count)
    {
        *psrc1 = *ptarget;
        psrc1++;
        count++;
        ptarget++;
    }
    while (*psrc2 != '\0' && buffer_size -1 > count)
    {
        *psrc2 = *ptarget;
        psrc1++;
        count++;
        ptarget++;
    }
    *ptarget = '\0';


    // TODO: write your code here
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above