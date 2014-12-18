#include <string>
#include <iostream>
#include <stdio.h>

class helloworld
{
private:
public:
    helloworld();
    ~helloworld();
    void myprint();
    void myprint(std::string word);
};

class reverse : public helloworld
{
private:
    char reverse_word;
    int inputlen;
public:
    void reverseprint();
    void reverseprint(char *word);
};

