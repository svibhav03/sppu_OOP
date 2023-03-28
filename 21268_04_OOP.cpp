#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string name;
    string str;
    int age;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your blood group: ";
    cin>>str;
    ofstream file01("out.txt");
    file01<<name<<" "<<age<<" "<<str;
    cout<<"Data stored in file successfully!\n"<<endl;
    file01.close();
    cout<<"File Closed!\n"<<endl;


    ifstream ofile("out.txt");
    char arr1[1000];
    cout<<"File Opened!\n"<<endl;
    cout<<"File contents: "<<endl;
    ofile.getline(arr1, 1000);
    cout<<arr1<<endl<<endl;
    return 0;
}
