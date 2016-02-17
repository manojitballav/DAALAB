#include"stdio.h"
search(int a[],int min,int max,int n){
int mid = (min+max)/2;
if(min>mid){
printf("Number not found");
return 0;
}
if(a[mid]>n)
search(a,min,mid-1,n);
else if(a[mid]<n)
search(a,mid+1,max,n);
else{
printf("Found at position: %i",mid+1);
return 0;
}
}
main(){
int a[10],min=0,max=9,i,n;
printf("Enter the array in ascending order: ");
for(i=0;i<10;i++){
scanf("%i",&a[i]);
}
printf("Enter the number to be searched: ");
scanf("%i",&n);
search(a,min,max,n);
}
