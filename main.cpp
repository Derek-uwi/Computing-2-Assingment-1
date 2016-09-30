#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  vector<string> myreplstr;//initialize empty vector
  string s, ch, replstr;//initialize strings
  int r, n, i;//initialize integers
  
  //input
  cout<< "Please enter a string with no spaces." << endl;//prompt user to enter string with no spaces
  getline(cin, s);//input of string
    while (s.find (' ') != string::npos)//validation that string has no spaces
      {
        cout << "String cannot have any spaces!";//if string has spaces this message will be printed
        cout<< "Please enter a string with no spaces." << endl;//prompt user to enter string with no spaces again
        getline(cin, s);//input of string
      }
  cout << "Please enter an integer." << endl;//prompt user to enter an integer
  cin >> r;//input integer
   if (r == 1)//if r is equal to 1 print the following statement
        {
            cout << "Please enter " << r << " pair of characters and strings" << endl;
        }
        else if (r > 1)//if r is more than 1 print the following statement
        {
            cout << "Please enter " << r << " pairs of characters and strings" << endl;
        }
  //figure out how to use vector for character and strings
  for (i = 0; i < r; i++ )//while i is less than r it will allow input of ch and replstr
  {
     cin >> replstr;
    myreplstr.push_back(replstr);//adds elements to the vector myreplstr
  }
   cout << "Please enter an integer." << endl;//prompt user to enter an integer
  cin >> n;
  
  //output
  cout << s << endl;
}
