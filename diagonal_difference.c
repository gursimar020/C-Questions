/*
Sample Input
3
11 2 4
4 5 6
10 8 -12

Sample Output
15
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,s1=0,s2=0; 
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
          scanf("%d",&a[i][j]);
           if(i==j)
            s1=s1+a[i][j];
       }
    }
     
  int  j=n-1;
    for(int i=0;i<n;i++)
    {s2=s2+a[i][j];
             j--;  }
 int s=0;
    s=s2-s1;
    if(s<0)
    {s=~s;
     s++;
    }
    printf("%d",s);
    
    return 0;
}
