#include <stdio.h>
void fact(int f);

int main(void) {
	int t;
	scanf("%d",&t);
	 while(t>0)
	 { int f;
	     scanf("%d",&f);
	     fact(f);
	     t=t-1;
	 }
	return 0;
}
void fact (int f)
{
    int m1,x,temp,y2,f1,k,j,m,arr[200],i;
    f1=f;
    j=0;
    m=0;
    while(f1!=0)
    {
        x=f1%10;
        arr[j]=x;
        f1=f1/10;
        m++;
        j++;
            
    }

    for(i=2;i<f;i++)
    {
        k=0;
        m1=0;
        j=0;
        temp=0;
        while(m1<m)
        {
            x=i*arr[j];
            j=j+1;
            x=x+temp;
            arr[k]=x%10;
            k=k+1;
            temp=x/10;
            m1=m1+1;
        }
        while(temp!=0)
        {
            x=temp%10;
            arr[k]=x;
            k=k+1;
            temp=temp/10;
            m=m+1;
        }
    }
    while(m>0)
    {
        printf("%d",arr[m-1]);
        m=m-1;
        
    }
    printf("\n");
}
