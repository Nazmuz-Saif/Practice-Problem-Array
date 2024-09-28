#include <stdio.h>
int main()
{
    int n,i;
    printf("array size: ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max,min;
    max=a[0];
    min=a[0];

    for(i=0;i<n;i++){
        if(a[i]>max){
                max=a[i];
            }
    }
    for(i=0;i<n;i++){
        if(a[i]<min){
                min=a[i];
            }
    }
    printf("maximum is %d\tminimum is %d",max,min);

    return 0;
}
