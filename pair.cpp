#include "Pair.h"

Pair::Pair()
{
  ch =  " ";
  replstr = " ";
}

void Pair::setch(char a)
{
  ch.push_back(a)
}

void Pair::setreplstr(string s)
{
  replstr.push_back(s)
}

string Pair::getreplstr(int g)
{
  return replstr[g];
}

char Pair::getch(int d)
{
  return ch[d];
}

Pair::~Pair()
{
}
