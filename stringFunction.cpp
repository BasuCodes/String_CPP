#include <iostream>
using namespace std;

int main()
{
    string s1="America",s2="america"; 

    //Compare of two string 
    if(s1.compare(s2)==0)   
    {
        cout<<"Bothe are Same"<<endl;
    }
    else{
        cout<<"Both are not Same"<<endl;
    }

    //append s2 string value
    cout<<"Before append "<<s2<<endl;
    s2.append(" is country");
    cout<<"After append "<<s2<<endl;
    
    //replace charcter in string s1
    cout<<"Before replace "<<s1<<endl;
    s1.replace(3,4,"j");
    cout<<"After replace "<<s1<<endl;

    //find word or charcter in string s2
    if(s2.find("country"))
    {
        cout<<"It is there"<<endl;
    }
    else{
        cout<<"It is not there"<<endl;
    }

}