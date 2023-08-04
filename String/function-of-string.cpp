#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="xyz";
    str.push_back('p');
    cout<<str<<endl;


    str.pop_back();
    cout<<str<<endl;


   string lnt="length";
   cout<<"length of length itself "<<lnt.length()<<endl;

   cout << "capacity"<<lnt.capacity()<<endl;
   lnt.resize(3);
   cout<<"resizing to 3 "<< lnt<<endl;

   std::string::iterator it;
   it =lnt.begin();
   cout <<*it<<" begin of the string"<<endl;
    return 0;

}