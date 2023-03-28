#include<iostream>
using namespace std;
int n;
#define size 10
template<class T>

void sel(T A[]){
	int i,j,min;
	T temp;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(A[j]<A[min])
				min=j;
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
	cout<<"\nSorted array: ";
	for(i=0;i<n;i++){
		cout<<" "<<A[i];
	}
}

int main(){
	int choice;
	char c;
	c = 'y';
	int A[size];
	float B[size];
	int i;
	cout<<"This program can sort both integer array and float array using the same template function!"<<endl;
	do{
		cout<<"1. Integer\n2. Float\n"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice){
		case 1:
		{
			cout<<"\nEnter Total Number Of Integer Elements: ";
			cin>>n;
			cout<<"\nEnter Integer Elements: "<<endl;
			for(i=0;i<n;i++){
				cin>>A[i];
			}
			sel(A);
			break;
		}
		case 2:
		{
			cout<<"\nEnter Total Number Of Float Elements: ";
			cin>>n;
			cout<<"\nEnter Float Elements: "<<endl;
			for(i=0;i<n;i++){
				cin>>B[i];
			}
			sel(B);
			break;
		}
		default:
		{
			cout<<"\nPlease enter a valid choice!"<<endl;;
		}
		}
	cout<<"\n\nDo you wish to continue? (y/n)"<<endl;
	char x;
	cin>>x;
	c = x;
	}
	while(c=='y');
	return 0;
	}
