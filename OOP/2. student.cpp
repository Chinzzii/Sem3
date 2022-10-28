//Name: Chinmay Singhania
//Roll Number: SECOC338
//Division: C

#include <iostream>
#include <iomanip>
#include<string.h>
using namespace std;

class studdb
{
    int roll;
    char name[20];
    char Class[10];
    char Div[10];
    char DOB[15];
    char BG[5];
    char Address[100];
    char TelNum[13];
    char LicenNum[10];

public:
    static int stdno;
  
    static void count()
    {
        cout<<"\nTotal no. of objects created: "<<stdno;
    }
  
    void fin()
    {
        cout<<"\nInline Function!";
    }

    studdb()
    {
        roll=0;
        strcpy(name,"abc");
        strcpy(Class,"x");
        strcpy(Div,"x");
        strcpy(DOB,"dd/mm/yyyy");
        strcpy(BG,"x");
        strcpy(Address,"xyz");
        strcpy(TelNum,"0000000000");
        strcpy(LicenNum,"1111111111");
        ++stdno;
    }
  
    studdb(studdb *ob)
    {
        roll=ob->roll;
        strcpy(name,ob->name);
        strcpy(Class,ob->Class);
        strcpy(Div,ob->Div);
        strcpy(DOB,ob->DOB);
        strcpy(BG,ob->BG);
        strcpy(Address,ob->Address);
        strcpy(TelNum,ob->TelNum);
        strcpy(LicenNum,ob->LicenNum);
        ++stdno;
    }
  
    void getdata()
    {
        cout<<"\n\nEnter:";
        cout<<"\nName:";
        cin>>name;
        cout<<"Roll Number:";
        cin>>roll;
        cout<<"Class:";
        cin>>Class;
        cout<<"Division:";
        cin>>Div;
        cout<<"Date of Birth:";
        cin>>DOB;
        cout<<"Blood Group:";
        cin>>BG;
        cout<<"Address:";
        cin>>Address;
        cout<<"Telephone Number:";
        cin>>TelNum;
        cout<<"License Number:";
        cin>>LicenNum;
    }

    friend void display(studdb d);

    ~studdb()
    {
        cout<<"\n\n"<<this->name<<"(Object) is destroyed!";
    }

};

void display(studdb d)
{
    cout<<"\n"<<setw(12)<<d.name<<setw(10)<<d.roll<<setw(10);
    cout<<d.Class<<setw(8)<<d.Div<<setw(12)<<d.DOB<<setw(5)<<d.BG<<setw(15)<<d.Address;
    cout<<setw(15)<<d.TelNum<<setw(16)<<d.LicenNum;
}

int studdb::count;

int main()
{
    cout<<"No error";
    int n,i;
    studdb d1,*ptr[5]; // calls constructor
    d1.fin();
    cout<<"\nDefault values:";
    display(d1);

    d1.getdata();
    display(d1);

    studdb d2(&d1);
    cout<<"\n\nUse of copy constructor :\n";
    display(d2);

    cout<<"\nHow many objects u want to create?:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        ptr[i]=new studdb();
        ptr[i]->getdata();
    }
    cout<<"\n"<<setw(12)<<"Name"<<setw(10)<<"Roll Num"<<setw(10);
    cout<<"Class"<<setw(8)<<"Div"<<setw(12)<<"DOB"<<setw(5)<<"BG"<<setw(15)<<"Address";
    cout<<setw(15)<<"Tele Num"<<setw(16)<<"License Num";
    for(i=0;i<n;i++)
        display(*ptr[i]);

    studdb::count();

    for(i=0;i<n;i++)
    {
        delete(ptr[i]);
    }
    cout<<"\nObjects deleted!" ;
    return 0;
}

