#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
   vector<string> myreplstr;//initialize empty vector
   string s, replstr;//initialize strings
   int r, n, i;//initialize integers
   char ch;//initailize character
   
   //input
   cout<< "Please enter a string with no spaces." << endl;//prompt user to enter string with no spaces
   getline(cin, s);//input of string
      while (s.find (' ') != string::npos)//validation that string has no spaces
         {
            cout << "String cannot have any spaces!";//if string has spaces this message will be printed
            cout<< "Please enter a string with no spaces." << endl;//prompt user to enter string with no spaces again
            getline(cin, s);//input of string
         }

   cout << "Please enter an integer for number of pairs." << endl;//prompt user to enter an integer for number pairs of character
   cin >> r;//input integer
       if (r == 1)//if r is equal to 1 print the following statement
         {
            cout << "Please enter " << r << " pair of character and string" << endl;
         }
      else if (r > 1)//if r is more than 1 print the following statement
         {
            cout << "Please enter " << r << " pairs of characters and strings" << endl;
        }
  
      for (i = 0; i < r; i++ )//while i is less than r it will allow input of ch and replstr
         {
            cin >> ch >> replstr;
            myreplstr.push_back(replstr);//adds elements to the vector myreplstr
         }
   cout << "Please enter number of times to repeat." << endl;//prompt user to enter an integer for how many times to repeat program
   cin >> n;
   
   
for (int repl = 0; repl <=(n-1); repl++)
{
    for (int j = 0; j <s.size();++i)
    {
        if(s[j] ==ch)
        s.replace(j,1,replstr);
    }
    
    cout <<s;
}

   return 0;
}
