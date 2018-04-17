#include<stdio.h>
int main(){
  int arr[10], a, b, temp, n;
  printf("How many elements ? \n");
  scanf("%d", &n);
  //Input
  printf("\nEnter the elements:- \n");
  for(a=0;a<n;a++)
    scanf("%d", &arr[a]);
  printf("\nHere are the elements before sorting:- \n");
  //Output
  for(a=0;a<n;a++)
    printf("%d ", arr[a]);
  printf("\n");
  //Bubble sort
  for(a=0;a<n;a++){
    for(b=0;b<n-a;b++){
      if(arr[b]>arr[b+1]){
        temp=arr[b+1];
        arr[b+1]=arr[b];
        arr[b]=temp;
      }
    }
  }
  //Output of sorting
  printf("\nHere are the elments after bubble sort:-\n");
  for(a=0;a<n;a++)
    printf("%d ", arr[a]);
  printf("\n");
  return 0;
}
