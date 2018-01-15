#include<stdio.h>
int main(){
  int n, ar[10], val, beg=0, end, found=0, mid, pos, a;
  printf("Enter a range:- ");
  scanf("%d", &n);
  for(a=0;a<n;a++){
    printf("Enter any no:- ");
    scanf("%d", &ar[a]);
  }
  printf("Which number to find ? ");
  scanf("%d", &val);
  end=n-1;
  //printf("%d", end);
  while(beg<=end){
    mid=(beg+end)/2;
    if(ar[mid]==val){
      pos=mid;
      printf("So your no found at %d pos\n", pos);
      found=1;
      break;
    }
    if(ar[mid]<val)
      beg=mid+1;
    else if(ar[mid]>val)
      end=mid-1;
  }
  if(found==0 && beg>end)
    printf("%d not found", val);
  return 0;
}
