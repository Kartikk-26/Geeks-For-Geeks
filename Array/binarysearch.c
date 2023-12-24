#include <stdio.h>
int Search(int arr[], int size, int element){

   int flag=0;
   int index;
   int mid,low,high;
   low=0;
   high=size-1;

   while (low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
                flag=1;
                index=mid;
                break;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else if (arr[mid]>element){
            high=mid-1;
        }
         
   }
   if (flag==1){
        printf("Element Found at index %d",index);
        return 1;
    }
    else{
        printf("Element not Found");
        return -1;
    }
}
void sort(int arr[], int size){
    for (int i =0;i<size-1;i++){
        for (int j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void display(int arr[], int n){
    printf("Elements in the Array are:\n");
    for (int i=0;i<n;i++){
        printf("Element at index %d = %d\n", i, arr[i]);
        
    }
}
int main(){
    int arr[10]={1,4,8,3,12}; // We need a sorted array for this
    int size=5;
    sort(arr,size);
    display(arr,size);
    int element=8;
    Search(arr, size, element);
}