/*3.Print all the prime numbers in a given 1D array. 
week:05
date:11/09/2024
*/
#include <stdio.h>
int main()
 {

    int i,a[100],n,k=2,t;
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
            for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);

        }
        printf("prime numbers present in the array are\n");
            for(i=0;i<n;i++)
            {
                    t=0;
                     for(k=2;k<a[i];k++)
                {
                        if(a[i]%k==0)
                        {
                                t=1;
                        }

                }
                    if(t==0)
                        {
                        printf("%d\t",a[i]);
        
                        }
             }
    
    return 0;
}
