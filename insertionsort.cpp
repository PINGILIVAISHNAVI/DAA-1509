//insertion sort
#include<stdio.h>
int main()
{
   int a[20],i,j,temp,n,index,min,k,key;
   printf("Enter how many numbers do you want to input");
   scanf("%d",&n);
   printf("enter numbers");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(k=1;k<n;k++)
   {
   	key=a[k];
   	j=k-1;
   	while(key<a[j]&&j>=0)
   	{
   		a[j+1]=a[j];
   		j=j-1;
   		
	   }

	   a[j+1]=key;
}
	   printf("the array after sorting is");
      for(i=0;i<n;i++)
      {
         printf("%d",a[i]);
      }
}
   
