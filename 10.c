#include <stdio.h>  
main() 
{  
    int count; 
    printf("Even num between 1 to 100\n");  
    for(count = 1; count <= 100; count++) { 
    if(count%2 == 0) 
    { 
    printf("%d ", count);  
    }  
    }  
   return 0;  
} 
