#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter Number of rows: ");
    scanf("%d",&num);
    int x = 96;
    
    for(int i=1;i<=num;i++){
        for(int j=1;j<=(num*2-i*2);j++)
	        printf("-");
        for(int k=0;k<i;k++){
            if(i-1==0){
                printf("%c",x+num-k);
                continue;
        
            }
    	    printf("%c-",x+num-k);
        }
        for(int l=i-1;l>0;l--){
            if(l-1==0){
                printf("%c",x+num-l+1);
                continue;
            }
    	    printf("%c-",x+num-l+1);
            
            
        }
        for(int j=1;j<=(num*2-i*2);j++)
	        printf("-");
        printf("\n");
        
    }
    for(int i=num-1;i>0;i--){
        for(int j=1;j<(num*2-i*2+1);j++)
	        printf("-");
        for(int j=0;j<i;j++)
    	    printf("%c-",x+num-j);
        for(int j=i-1;j>0;j--){
            
    	    printf("%c",x+num-j+1);
            if((num*2-i*2+1)>=1){
                printf("-");
            }
        }
        for(int j=1;j<(num*2-i*2);j++)
	        printf("-");
        printf("\n");
        
    }
    
    return 0;
}
