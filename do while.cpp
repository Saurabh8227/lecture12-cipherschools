/*
1)wap for password generation using do-while 

#include<iostream>
using namespace std;
int main(){
	int password;
	cout<<"Enter the password"<<endl;
	cin>>password;
	while(password<999999){
		cout<<"Thr password doesnt match not full fill require condition please give again password"<<endl;
		cin>>password;
	}
	cout<<"The user enter correct password";
	
}
*/




// Infinite loop
#include<iostream>
using namespace std;
int main(){
	int choclate;
	int count;
	while(1){
		cout<<"choclate";
		count++;
		if(count>100)break;
	}
}

