#include <stdio.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int i,d;
	int p[1000000]={0};
	for (i=0;i<t;i++)
	{
	   scanf("%d",&d);
	   p[d]=p[d]+1;
	    
	}
	d=0;
	while(d<1000000){
	    while(p[d])
	    {
	    printf("%d\n",d);
	    p[d]=p[d]-1;
	    }
	    d=d+1;
	}
	return 0;
}

