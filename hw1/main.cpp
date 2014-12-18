#include <string>
#include <iostream>
#include "helloworld.h"

int main()
{
  helloworld basic_hello;
  basic_hello.myprint();
  basic_hello.myprint("say hello to the world!");
  reverse reverse_hello;
  reverse_hello.reverseprint();
  reverse_hello.reverseprint("say hello to the world!");
}
