#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int temp=n,res;
	while(temp!=0){
		int last=temp%10;
		res=res*10+last;
		temp/=10;
  }
  if(n==res)
		printf("palindrome");
  else 
    printf("not a palindrome");
  return 0;
}