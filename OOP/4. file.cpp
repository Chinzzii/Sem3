// Name: Chinmay Singhania
// Roll no:- SECOC338
// Division: C

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream file;
	file.open("sample.txt", ios::out);
	if(!file)
	{
		cout<<"ERR"<<endl;
		return 0;
	}
	cout<<"File created successfully"<<endl;
	file<<"We successfully opened the file"<<endl;
	file.close();
	file.open("sample.txt", ios::in);
	if(!file)
	{
		cout<<"ERR"<<endl;
		return 0;
	}
	char ch;
	cout<<"file content"<<endl;
	while(!file.eof())
	{
		file>>ch;
		cout<<ch;
	}
	file.close();
		
    return 0;
}



