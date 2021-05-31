#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char str[50];//user input
    here:std::cin.getline(str,50);
    if(strcasecmp ("hello",str)==0)//if both are same
	{
      cout<<"Hello, what's your name"<<endl;
      goto here;
     }
     else if(strcasecmp ("hi",str)==0)
     {
       cout<<"hey there what's your name"<<endl;
       goto here;
     }
     else if(! strcasecmp ("How are you?",str))
     {
        cout<<"A machine is good as long as you keep it prevented from virus :-) "<<endl;
        goto here;
     }
     else if(strcasecmp("I am good.",str)==0)
     {
        cout<<"glad to hear that"<<endl;
        goto here;
      }
      else
      {
         cout<<"I couldn't understand what you said, sorry I am under development"<<endl;
         goto here;
      }
      return 0;
}
