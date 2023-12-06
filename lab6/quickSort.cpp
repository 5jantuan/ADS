#include <iostream>
#include <vector>

int partOfQuickSort(int[]arr,int left,int right){
    int pivot=arr[(left+rith)/2];
    while(left<=rigth){
        while(arr[left]<pivot)left++;
        while(arr[right]>pivot)right--;
        if (left<=right){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
    }
    return left;
    void quickSort(int[]arr,int start,int end){
        if(start>=end)return;
        int rigthStart=partOfQuickSort(int[]arr,int start,int end){
            quickSort(arr,start,rigthStart-1);
            quickSort(arr,rigthStart, end);

        }
    }
    void quickSort(int[]arr){
        quickSort(arr,0,arr.length-1)
    }
}