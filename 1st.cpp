#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the character  :";
	cin>>ch;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		cout<<ch<<"  is an vowel";
	}
	else
	{
		cout<<ch<<"  is an consonant";
 }
 return 0;
}
