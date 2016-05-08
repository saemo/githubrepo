#include <stdio.h>
 
int main( int argc, char *argv[] )
{
	int a;
	if ( argc > 1 ) 
    	{
        	/* We print argv[0] assuming it is the program name */
        	printf( "\nnumber of inparamters are %d ", argc );
        	printf( "\nusage: %s your entered number is", argv[1] );
 		a=int(argv[1]);
		printf("Integer that you have entered is %s\n", a);
		return 0;
    	}
    	else 
    	{

	  	printf("Enter an integer\n");
	  	scanf("%d", &a);
 	}
	printf("Integer that you have entered is %d\n", a);
  	return 0;
}