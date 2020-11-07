//Sorted array is needed
#include<stdio.h>
#include<string.h>







void array_print(int arr[], int no)
{
  for(int i = 0; i<no; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

void intersection_array(int arr1[], int arr2[], int size_arr1, int size_arr2)
{
  int i = 0, j = 0;
  
  while(i<size_arr1 && j<size_arr2)
  {
    if(arr1[i] < arr2[j])
      i++;  // Simple incrementing the array, becoze we didn't needed union
    if(arr1[i] > arr2[j])
      j++;// Simple incrementing the array, becoze we didn't needed union
    if(arr1[i] == arr2[j])
    {
      printf("%d ",arr2[j]); //only common elemnt will print from this loop nothing else will not get printed by this.
      j++;
      i++;
    }
  }
}

int main()
{
  int arr1[] = {1,2,3,7,8,9,10}, arr2[] = {2, 8, 10, 15, 16, 100} ,no,j=0,temp=0,mid=0,n=0; //Both array should be sorted.
  int size_arr1 = sizeof(arr1)/sizeof(int), size_arr2 = sizeof(arr2)/sizeof(int);
  array_print(arr1,size_arr1);
  array_print(arr2,size_arr2);
  intersection_array(arr1,arr2,size_arr1,size_arr2);
}
