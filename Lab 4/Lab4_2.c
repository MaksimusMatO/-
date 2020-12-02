#include <stdio.h>
#include <stdlib.h>

struct store
{      
        int number;
        char *charact;
    
};

int main()
{       
        int size;
        printf("enter size :");
        scanf("%i", &size);
        struct store store[size];
        for( int i = 0; i < size; i++ )
        {
                scanf("%i", &store[i].number);
                if( (store[i].number % 2) == 0 )
                {
                        store[i].charact = "even" ;
                }
                else if(store[i].number == 0)
                {
                        store[i].charact = "null" ;
                }
                else
                {
                        store[i].charact = "noteven" ;        
                }

        }
        //int n = sizeof(store)/sizeof(store[0]);
        for( int i = 0; i < size; i++ )
        {
                printf("%d - %s\n", store[i].number, store[i].charact);
        }

    	getchar();
    	getchar();	

	return 0;
}
