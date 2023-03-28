#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

	typedef map<string,int> mapType;
	mapType populationMap;

	populationMap.insert(pair<string, int>("Maharashtra", 113));
	populationMap.insert(pair<string, int>("Uttar Pradesh", 199));
	populationMap.insert(pair<string, int>("Bihar", 105));
	populationMap.insert(pair<string, int>("Madhya Pradesh", 72));
	populationMap.insert(pair<string, int>("West Bengal", 91));

	mapType::iterator iter;

	cout<<"\n*********Population of states in India**********\n";
	cout<<"\nThis map currently holds the data of "<<populationMap.size()<<" states."<<endl;
	cout<<"\nAll population data is from the Census of 2011."<<endl;

	string state_name;
	cout<<"\nEnter name of the state: ";
	cin>>state_name;
	iter = populationMap.find(state_name);
	if( iter!= populationMap.end() )
		cout<<endl<<state_name<<"'s population is "<<iter->second<<" million"<<endl;
	else
		cout<<"\nData for "<<state_name<<" is not in the map.\n";
	populationMap.clear();
}
