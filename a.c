#include <stdio.h>
main()
{
char line[81], ctr;
int i,c,
end = 0,
characters = 0,
words = 0,
lines = 0;
printf(“KEY IN THE TEXT.\n”);
printf(“GIVE ONE SPACE AFTER EACH WORD.\n”);
printf(“WHEN COMPLETED, PRESS ‘RETURN’.\n\n”);
while( end == 0)
{
c = 0;
while((ctr=getchar()) != ‘\n’)
line[c++] = ctr;
line[c] = ”;
/* counting the words in a line */
if(line[0] == ”)
break ;
else
{
words++;
for(i=0; line[i] != ”;i++)
if(line[i] == ‘ ‘ || line[i] == ‘\t’)
words++;
}
/* counting lines and characters */
lines = lines +1;
characters = characters + strlen(line);
}
printf (“\n”);
printf(“Number of lines = %d\n”, lines);
printf(“Number of words = %d\n”, words);
printf(“Number of characters = %d\n”, characters);
}
