#include<stdio.h>
int main()
{
    int m=0,n=0,temp=0,i=0,j=0,sum=0,k=0;
    scanf("%d,%d",&m,&n);
    if(m<=0||n<0||m>9999||n>9999)
    {
        printf("error");
        return 0;
    }
    if(m>n)
    {
        temp=m;
        m=n;
        n=temp;
    }
    for(i=m; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i)
            if(k==0)
            {
                printf("%d",sum);
                k++;
            }
            else
                printf(",%d",sum);
        sum=0;
    }
    return 0;
}


    