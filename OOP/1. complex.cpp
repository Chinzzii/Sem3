//Name: Chinmay Singhania
//Roll Number: SECOC338
//Division: C

#include <iostream>
#include <string>
#include<cmath>
using namespace std;

class Complex
{
    public:
    int real,imag;

    public:
    Complex()	//Default Constructor
    {
        real = 0;
        imag = 0;

    }

    Complex add(Complex num1,Complex num2)
    {
        Complex result;

        result.real = num1.real + num2.real;	//To store real numbers addition
        result.imag = num1.imag + num2.imag;

        return result;
    }	//End of add()

    Complex multiply(Complex num1, Complex num2)
    {
        Complex product;
        product.real = num1.real*num2.real - num1.imag*num2.imag;	//'-' as i^2 = -1
        product.imag = num1.real*num2.imag + num1.imag*num2.real;
        return product;
    }	//End of multiply()

    ~ Complex()	//Destructor
    {
    }
};

int main()
{
    Complex res,pro;
    Complex num1,num2;

        cout<<"Enter real part of first complex number "<<endl;
        cin>>num1.real;
        cout<<"Enter imaginary part of first complex number "<<endl;
        cin>>num1.imag;

        cout<<"Enter real part of second complex number "<<endl;
        cin>>num2.real;
        cout<<"Enter imaginary part of second complex number "<<endl;
        cin>>num2.imag;
        cout<<"*****************************************"<<endl;
        
		//Printing First Complex Number
        cout<<"The first complex number is : "<<num1.real<<" +i("<<num1.imag<<")"<<endl;

        //Printing second complex number
        cout<<"The second complex number is : "<<num2.real<<" +i("<<num2.imag<<")"<<endl;

    res = res.add(num1,num2);	//Calling add function
    if(res.imag > 0)
    {
        cout<<"The addition of two complex numbers is : "<<res.real<<" +i("<<res.imag<<")"<<endl;
    }
    else
    {
        cout<<"The addition of two complex numbers is : "<<res.real<<" -i"<<abs(res.imag)<<endl;
    }

    pro = pro.multiply(num1,num2);	//Calling multiplication function
    if(pro.imag > 0)
    {
    cout<<"The product of two complex numbers is : "<<pro.real<<" + "<<pro.imag<<"i"<<endl;
    }
    else
    {
        cout<<"The product of two complex numbers is : "<<pro.real<<pro.imag<<"i"<<endl;
    }

    return 0;
}



