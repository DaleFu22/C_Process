#include <stdio.h>
int fun(int a[][3],int m,int n);
int main ()
{
	int a[][3]={98,87,75,53,32,21,12,23,35,57,78,89};
	int n=sizeof(a[0])/sizeof(a[0][0]),m=sizeof(a)/sizeof(a[0]);
	printf ("%d\t%d\n",m,n);
	fun(a,m,n);
	return 0;
}

int fun(int a[][3],int m,int n)
{
	int min=a[0][0],max=a[0][0],i=0,j=0;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if(min>a[i][j]){
				min=a[i][j];
			}
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
	}
	printf ("max=%d\tmin=%d\n",max,min);
}
