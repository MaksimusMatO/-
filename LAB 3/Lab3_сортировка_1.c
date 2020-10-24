#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{   
    srand(time(NULL));
	int n ;
	printf("Array size : ");
	scanf("%d",&n );
	int M[n];

	for(int i=0 ; i<n ; i++ )
	{
        M[i] = 100 - rand() % 200;
	}

	int mid;
	int max = M[0];
	int min = M[n-1];

	for(int i =0 ; i<n ; i++)
	{
		
		if(M[i]>max)
        {
            max = M[i];
        }
        if(M[i]<min)
        {
            min = M[i];
        }
	}

	for(int t = 0; t<n ; t++ )
	{
		int N=0 , m=0 ;

		for(int j = 0 ; j!=t ; j++)
	    {
	    	if(M[j]!=M[t])
	    	{
		        if(M[j]>M[t])
		        {
		   			N++;
		        }
		    	else
		    	{
		    		m++;
		    	}
	    	}
	    }
		if(N==m)
		{
			mid = M[t];	
		}
	}

	for(int i=0 ; i<n ; i++ )
    {
        printf("%d.",M[i]);
    }
    
    printf("\nMax %d\n",max);
    printf("min %d\n",min);
    printf("mid %d\n",mid);

	return 0;
}
