#include <stdio.h>
int main()
{
    int i,j,t,a[100],n=0;
    char c=0;
    int min,max;
    printf("请输入一组数据\n");
    while(c!='\n')
    {
        scanf("%d",&a[n++]);
        c=getchar();
    }
    max=0;
    min=n-1;
    for(i=1;i<n;i++)
    {
        if(a[max]<a[i])
        {
            max=i;
        }
    }
    if(max!=0)
    {
        t=a[0];
        a[0]=a[max];
        a[max]=t;
    }
    for(j=n-2;j>=0;j--)
    {
        if(a[min]>a[j])
        {
            min=j;
        }
    }
    if(min!=n-1)
    {
        t=a[n-1];
        a[n-1]=a[min];
        a[min]=t;
    }
    printf("交换后的数组\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
