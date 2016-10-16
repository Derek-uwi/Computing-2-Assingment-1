#ifndef PAIR_H //header guard
#define PAIR_H //header guard
#include <string>

Class Pair
{
  Private:
    char ch;
    string replstr;
    vector <string> myreplstr;
    vector <char> mych;
    
  Public:
    Pair();//constructor
    void getch(char);
    void getreplstr(string);
    
    char setch(char);
    string setreplstr(string);
    ~Pair()    
}
#endif

