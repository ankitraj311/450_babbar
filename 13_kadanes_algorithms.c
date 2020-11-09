//Consisiting to unsorted element with repeatation.
#include<stdio.h>







void array_print(int arr[], int no)  //Array printing 
{
  for(int i = 0; i<no; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}


int cyclic_rotate(int arr1[], int size_arr1)
{
  int meh = 0, msf = 0; //meh stands for maximum end here and msf stands for maximum so far.
  for(int i = 0; i<size_arr1;i++)
  {
    meh = meh + arr1[i]; //adding every element of array to meh

    if(msf<meh) //we will return msf so, only in the end we will going to send our sum to msf
    {
      msf = meh;
    }
    if(meh<0) //we some how meh is -ive then will initate to 0
    { 
      meh = 0;
    }
  }
  return meh;  //retruning meh
}


int main()
{
  int arr1[] = {-2,-3,4,-1,-2,1,5,-3}, no,j=0;
  int size_arr1 = sizeof(arr1)/sizeof(int);
  array_print(arr1,size_arr1);//Printing Array without any chnage in it
  int sum = cyclic_rotate(arr1,size_arr1);
  printf("Sum is %d",sum);
}
