#include <iostream>
using namespace std;
int main()
{
    cout<<"1: UNDERWEIGHT"<<endl<<"2: NORMAL WEIGHT"<<endl<<"3: OVERWEIGHT"<<endl<<"4: OBESITY"<<endl;
    int m;
    int h,bmi;
    int t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
   for(int i=0;i<t;i++)
   {
    cout<<"Enter the weight and height"<<endl;
    cin>>m>>h;
    bmi=m/(h*h);
    if(bmi<=18)
    {
        cout<<"1"<<endl;
    }
    else if(bmi>18 && bmi<=24)
    {
        cout<<"2"<<endl;
    }
    else if(bmi>24 && bmi<=29)
    {
        cout<<"3"<<endl;
    }
    else
    {
        cout<<"4"<<endl;
    }
  }
   
}
