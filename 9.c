#include <stdio.h>
#include <string.h>

main(void) {

    int nc = 0;
    int word = 0;

    char str[] = "This test";
    int len = strlen(str);
    int i;
    for(i = 0; i < len; i++)
    {
        ++nc;
        if(isspace(str)){        
             ++word;   
        }

    }

    printf("%d\n",nc);

}
