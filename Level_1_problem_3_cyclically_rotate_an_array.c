#include <stdio.h>
int main()
{
    int n,i;
    printf("array size: ");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[n-1]);

    for(i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
