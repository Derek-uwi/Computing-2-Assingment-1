#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
   vector<char> mych;//initialize empty vector for mych
   vector<string> myreplstr;//initialize empty vector
   string s, replstr;//initialize strings
   int r, n, i, a, d, g;//initialize integers
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
            cout<< "Enter a character" <<endl;
            cin >> ch;
            mych.push_back(ch);
            cout<<"Enter a string to replace character"<<endl;
            cin>> replstr;
            myreplstr.push_back(replstr);//adds elements to the vector myreplstr
         }
         myreplstr.push_back(s);
   cout << "Please enter number of times to repeat." << endl;//prompt user to enter an integer for how many times to repeat program
   cin >> n;

    while(n-1 != 0)
      {
       for (a = 0; a <s.size(); a+=d)
         {
            d = 1
            for (g = 0; g < r; g++)
               {
                    if (s[a] == mych[g])
                        {
                            s.replace(a,1,myreplstr[g]);
                            d = myreplstr[g].size();
                        }
                }
           }
        }

cout <<s;
   return 0;
}
