#include <iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"enter the year:";
    cin>>yr;
    if((yr%4==0) && (yr%100!=0))
    cout<<"\n it is a leap year";
else if(yr%400==0)
cout<<"\n it is a leap year";
else
cout<<"\n it is a leap year";
cout<<endl;
return 0;
}