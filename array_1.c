#include <stdio.h>


int main() {
	int a[4];
	int count=0;
	for( int i=0; i<4; i++)
	{
	    scanf("%d", &a[i]);
	}
	for( int i=0; i<4; i++)
	{
	    if (a[i]>=10)
	    {
	       count++;
	    }
	    
	}
	printf("%d ", count);
	return 0;
}