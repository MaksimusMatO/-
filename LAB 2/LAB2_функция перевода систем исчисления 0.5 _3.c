#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void power(int number , int source , int target)
{   
    
    if(source <=10  && target<10)
    {
        int  A[100] ,a = number ;
        int res = 0;
        int i = 0;
        while( a>0 )
        { 
            A[i]= number / (pow (10 ,i ));
            A[i]= A[i] % 10;
            i++;
            a = a/10;                          
        }
        int j =0 ;
        while( j!=i ) 
        {
            res += A[j] * (pow (source ,j ));   
            j++;
        }
        i = 0 , a = res;
        int c; 
        
        while( a>0 )
        { 
            c = res % target;
            res= res / target ;     
            i++;
            A[i] = c;
            a = a/target;
                                      
        }
        while(i>0)
        {
            printf("%d",A[i]);
            i--;
        }
         
               
    }
    if(source == 0|| source == 1)
    {
        printf("0"); 
    }
    if((target>=10 && source>=2) )
    {
        int  A[100] ,a = number ;
        int res = 0;
        int i = 0;
        while( a>0 )
        { 
            A[i]= number / (pow (10 ,i ));
            
            A[i]= A[i] % 10;
            
            i++;
            a = a/10;                          
        }
        int j =0 ;
        while( j!=i )
        {
            res += A[j] * (pow (source ,j ));   
            j++;
            
                    
        }
        
        if(target > 10 )
        {   
            char R[i+1];
            char res_ch = 0;
            j=0;
            if(i<=1)
            {
                while( j!=i )
                {
                    R[j] = (char)A[j];   
                    if(R[j]<10 )
                    {
                        res += (R[j]+48 )* (pow (source ,j ));   
                    }
                    else
                    {
                        char ch = (char)R[j];
                        res_ch += (ch +55) * (pow (source ,j )) ;
                    }
                    j++;
                }
                printf(",,,%c,,,\n",res_ch);     
            }
            else
            {   
                char R[100] ;
                int a = res;
                
                int i=0, c;
                while( a>0 )
                {
                    c = res / target  ;
                    
                    c = res % target;
                    res = res / target;
                    
                    R[i] = (char)c;
                    a = a/target;
                    i++;                              
                }
                while(i>=0)
                {
                    if(R[i]<10)
                    {
                        printf("%c",R[i]+48);
                    }
                    else
                    {
                        printf("%c",R[i]+55);
                    }
                    i--;
                }
            }
            
        }
        else
        {
            printf("%d\n",res);
            
        }
    }
}

int main()
{
    int numb , sour , targ;
    printf("enter numbers ( number, current notation, total notation ) : ");
    scanf("%d%d%d",&numb ,&sour ,&targ );
    power(numb ,sour ,targ);
    getchar(); getchar();
    return 0;
}