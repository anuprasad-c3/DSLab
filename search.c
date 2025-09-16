#include<stdio.h>
int linearSearch(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key)
			return i;
	}
		return -1;
}
int main(){
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=30;
	int index=linearSearch(arr,n,key);
	if(index !=-1){
		printf("Element %d found at index %d.\n",key,index);
	}else{
		printf("Element %d not found in array.\n",key);
	}
	return 0;
}
