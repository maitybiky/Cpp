#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str="xyz";
    str.push_back('p');
    cout<<str<<endl;


    str.pop_back();
    cout<<str<<endl;

// clear string and check weather empty

   string clr="a brown lazy fox sleeping";
   clr.clear();
   cout << "clear"<<clr<<endl;
   cout << "clr is empty";
   clr.empty()?cout<<"true"<<endl:cout<<"false"<<endl;

//
//  compare strings
   string s1="abc";
   string s2="xyz";
   string s3="abc";

   if(!s1.compare(s2)) cout<<"s1 and s2 same"<<endl;
   if(!s1.compare(s3)) cout<<"s1 and s3 same"<<endl;

//
// Erase string and find 
 string ers="pewdepie";
 cout<<"find pie"<<ers.find("pie")<<endl; // return index 
 cout<<"find x"<<ers.find("x")<<endl; // i think garbage value
  ers.erase(3,2);
  cout<<"erase "<<ers<<endl;
//

// insert
  string ins ="hostal";
  ins.insert(3,"pi");
  cout<<"insert "<<ins<<endl;
//

// string to integers vice versa
   string stint ="777";
   cout<<"string to integers "<<stoi(stint)+3<<endl;

   int num=234;
  
   cout<<"int to string"<< to_string(num)+'4'<<endl;
//

// sorting
  string srt="dfirerlejor fdfdlkffdfsdl";
  sort(srt.begin(),srt.end());
  cout<<"sortinh "<<srt<<endl;
//
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