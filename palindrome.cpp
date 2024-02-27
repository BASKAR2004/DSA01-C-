#include<iostream>
using namespace std;
int main ()
{
	int a,digit,sum=0,num;
	cout<<"Enter the number";
	cin>>num;
	num=a;
	while(num!=0){
		digit=num%10;
		sum=(sum*10)+digit;
		num=num/10;	
	}
	if(sum==a){
		cout<<"THis is an palindrome";	
	}
	else{
		cout<<"This is not an palindrome";
	
	}
	return 0;
}

