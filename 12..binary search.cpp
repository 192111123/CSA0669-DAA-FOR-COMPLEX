#include<stdio.h>
int binarysearch(int array[],int x,int low,int high)
{
if(high>=low)
{
	int mid=low+(high-low)/2;
	if (array[mid]==x)
	return mid;
	if(array[mid>x])
	return binarysearch(array,x,low,mid-1);
	else
	return binarysearch(array,x,mid+1,high);
}
return -1;
}
int  main(void)
{
	int array[]={5,3,8,2,9,1,7,6};
	int n=sizeof(array)/sizeof(array[0]);
	int x=5;
	int result= binarysearch(array,x,0,n-1);
	if(result==-1)
	printf("not found");
	else
	printf("element is found at index %d:",result);
}
