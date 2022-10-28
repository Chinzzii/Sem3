// Name: Chinmay Singhania
// Roll no:- SECOC338
// Division: C

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
  map<string,int> data;

  data.insert(pair<string,int>("Maharashtra",80));
  data.insert(pair<string,int>("Goa",30));
  data.insert(pair<string,int>("Karnataka",50));
  data.insert(pair<string,int>("Punjab",40));
  data.insert(pair<string,int>("Madhya Pradesh",60));
  data.insert(pair<string,int>("Sikkim",20));

  string state;
  cout<<"Enter the name of the state\t";
  cin>>state;
  cout<<data[state]<<"cr";

}



