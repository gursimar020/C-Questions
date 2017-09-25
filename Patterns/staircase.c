/* Consider a staircase of size =6

Sample Input
6 
Sample Output
     #
    ##
   ###
  ####
 #####
######
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int m=n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;++j)
        {
            if(j<m)
                printf(" ");
            else if(j>=m)
                printf("#");        
        }
         m--;
        printf("\n");
    }
    return 0;
}


