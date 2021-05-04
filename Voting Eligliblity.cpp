//VOTING ELIGIBLITY
#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter Age of a user: ";
	cin>>age;
	
	if(age>=18 && age<26)
	{
		cout<<"\n\nYou are minor and Eligible for voting.";
	}
	else if(age>=26 )
	{
		cout<<"\n\nYou are major and Eligible for voting.";
	}
	else
	{
		cout<<"\n\nYou are not eligible for voting.";
	}
	return 0;
}
//Created by.....Aditya Kuranjer,,,under Captain Aadhar........->Happy Coding<-........
