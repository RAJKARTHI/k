#include <stdio.h>
main()
{
    int low, high, i, flag;
    printf("Enter two num(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Prime num between %d and %d are: ", low, high);
    while (low < high)
    {
     flag = 0;
     for(i = 2; i <= low/2; ++i)
     {
     if(low % i == 0)
      {
      flag = 1;
      break;
     }
     }
     if (flag == 0)
     printf("%d ", low);
    ++low;
    }
    return 0;
}
