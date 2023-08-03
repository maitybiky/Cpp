#include <iostream>

#include <string>

using namespace std;
class User {
  public: string name;
  int age;
  //constructer 
  User(string Name, int yob) {
    name = Name;
    age = currerntYear-yob;
  }
  void intro(string month);

  private:
  int currerntYear=2023;
};

void User::intro(string month) {
  cout << "Your birthday is in " << month << " " << age << "year ago" << endl;
}

int main() {

  User u1("surajit", 2003);
  u1.intro("aug");
  cout << u1.age << endl;
  return 0;
}