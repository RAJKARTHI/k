#include <stdio.h>  
main() 
{  
    int count; 
    printf("odd num between 1 to 100\n");  
    for(count = 1; count <= 100; count++) { 
    if(count%2 == 1) 
    { 
    printf("%d ", count);  
    }  
    }  
   return 0;  
} 
