#include <iostream>
#include <string.h>
#include <stdio.h>
#include "helloworld.h"

void helloworld::myprint()
{
  using std::cout;
  using std::ios_base;
  cout << "Hello World!\n";
}

void helloworld::myprint(std::string word)
{
  std::cout << word <<"\n";
}

helloworld::helloworld()
{
}

helloworld::~helloworld()
{
}

void reverse::reverseprint()
{
  std::cout << "!dlroW olleH\n";
}

void reverse::reverseprint(char *word)
{
  inputlen=strlen(word);
  for(long i=0;i<inputlen; ++i)
  {
    reverse_word[i]=word[inputlen-i-1];
  }
  myprint(reverse_word);
}
