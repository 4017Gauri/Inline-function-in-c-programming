#include<iostream>
using namespace std;

inline int multiplication(int a, int b){
	return(a*b);
}
int main(){
	int num1, num2;
	cout<<"\n Enter the first number\n";
	cin>>num1; 
	cout<<"\n Enter the second number\n";
	cin>>num2; 
	
	cout<<"\n Multilplication of given two number is\t:"<<(multiplication(num1, num2)) <<endl;
	
	return 0;

}

