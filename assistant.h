
/*
----------------------------------------------------------------------------
               Project title   : Jarvis(personal assistant)
               Made By         : Nayem
               Written in      : C++
               Started project : 15 April , 2024
               Platform        : Windows
               IDE used        : Code blocks
               Last Modified   : 27 August , 2024
               Total Code      : 700+ Lines
 ----------------------------------------------------------------------------
*/



#ifndef ASSISTANT_H
#define ASSISTANT_H
using namespace std;

class assistant
{

   public:
              assistant();
              ~assistant();
         void greeting();
         void typing(string);
         void clock();
         void speak(string);

};

#endif // ASSISTANT_H
