#include <stdio.h>
int main()
{
    int n,i,x,count=0;
    printf("array size: ");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("which number you want to count: ");
    scanf("%d", &x);

    for(i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    printf("%d", count);


    return 0;
}
