#include <stdio.h>
int main( void )
{
int *p1;
char *p2;
p2=p1;
}
/*Will the program compile successfully without warnings? Why and why not?
No, it will compile with a warning because int * and char * are incompatible pointer types.
You must use a cast like p2 = (char *)p1; to avoid the warning.*/