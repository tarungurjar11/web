#include <stdio.h>

int main(void) {
    int t,p[10000];
    scanf("%d",&t);
    int i=0,t1=t;
     int a,b;
    while(t>0)
    {
       scanf("%d%d",&a,&b);
        p[i]=a-b;
        t=t-1;
        i=i+1;
    }
    int sum=0,k=t1,j;
    while(k>0)
    {
        sum=sum+p[k-1];
        k=k-1;
    }
    if(sum>0)
    {
    int max=0;
    for(j=0;j<t1;j++)
    {
        if(max<p[j])
        {
           max=p[j];
          
        }
    }
    printf("1 %d",max);
        
    }
    else
    {
    if(sum<0)
    {    int min=0;
        for(j=0;j<t1;j++)
    {
        if(min>p[j])
        {
        min=p[j];
        }
        
    }
    min=min*(-1);
    printf("2 %d",min);
    }
    }
	// your code goes here
	return 0;
}

