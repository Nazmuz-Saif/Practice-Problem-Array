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
    int j,temp;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++)
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }

    for(i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
