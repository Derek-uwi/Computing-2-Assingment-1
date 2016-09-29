#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  vector<string> myreplstr;//initialize empty vector
  string s, ch, replstr;
  int r, n, i;
  
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
   if (r == 1)
        {
            cout << "Please enter " << r << " pair of characters and strings" << endl;
        }
        else if (r > 1)
        {
            cout << "Please enter " << r << " pairs of characters and strings" << endl;
        }
  //figure out how to use vector for character and strings
  for (i = 0; i < r; i++ )
  {
     cin >> replstr;
    myreplstr.push_back(replstr);
  }
   cout << "Please enter an integer." << endl;
  cin >> n;
  
  //output
  cout << s << endl;
}
