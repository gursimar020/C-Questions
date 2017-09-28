/* maximizing xor

Ques - given two integer l and r find the max value of a nd b where l<=a<=b<=r;

Sample Input
10
15
Sample Output
7

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int max=0;
    int a=0;
    for(int i=l;i<=r;i++)
    {
        for(int j=i;j<=r;j++)
        {    a=i^j;
        if(max<a)
            max=a;
    }
    }
    return max;


}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}
