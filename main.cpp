#include <iostream>

using namespace std;

class charNode
{
public:
  char ch;
  int count;
  charNode *next;
  
  charNode()
  {
    ch = 0;
    count = 1;
    next = NULL;
  }
};

class charOperation
{
private:
  charNode *head;
  
public:
  charOperation()
  {
    head = NULL;
  }
  
  void countCharacterFrequency()
  {
    
  }
}
int main()
{
  
}
