// Working for 10 20 -30 -40 50 -60 70 80 -90 100
// Fail for   -12, 11, -13, -5, 6. -7, 5, -3, -6 
#include<stdio.h>
#include<string.h>
int main()
{
  int arr[100],no,j=0,temp=0,mid=0;
  printf("Enter length of array");
  scanf("%d",&no);




  for(int i = 0; i<no; i++)
  {
    scanf("%d",&arr[i]);
  }

  for(int i = 0; i<no; i++)
  {
    printf("%d ",arr[i]);
  }

  printf("\n");
  if(no%2 == 0)
  {
   mid = no/2;
  }
  else
  {
    mid = (no-1)/2;
  }

  for(int i = no-1; i>=mid; i--)
  //for(int i = mid; i<=no-1; i++)
  {
    if(arr[i]<0)
    {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      j++;
    }
  }

  for(int i = 0; i<no; i++)
  {
    printf("%d ",arr[i]);
  }
}
