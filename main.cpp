#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string s, ch, replstr;
  int r, n;
  
  //input
  cout<< "Please enter a string with no spaces." << endl;
  getline(cin, s);
    while (s.find (' ') != string::npos)//validation that string has no spaces
      {
        cout << "String cannot have any spaces!";
        cout<< "Please enter a string with no spaces." << endl;
        getline(cin, s);
      }
  cout << "Please enter an integer." << endl;
  cin >> r;
  cout << "Please enter " << r << " pair(s) of characters and strings" << endl;
  //figure out how to use vector for character and strings
   cout << "Please enter an integer." << endl;
  cin >> n;
  
  
  
  //output
  cout << s << endl;
}
