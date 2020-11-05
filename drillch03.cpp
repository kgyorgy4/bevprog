#include "std_lib_facilities.h"
int main()
{
cout << "Enter the name of the person you want to write to:\n"; //angol, mert így egyszerűbb
string name="";
cin >> name; 
cout << "Dear " << name << "!\n";
cout << "How are you? I'm fine. It's been a while since we've seen each other.\n";
cout << "We should grab a drink sometime.\n";
string friend_name;
char friend_sex=0;
cout << "Enter the name of another friend:\n";
cin >> friend_name;
cout << "Enter you other friend's gender (f - female, m - male): ";
cin >> friend_sex;
cout << "Have you seen " << friend_name << " lately?\n";

if (friend_sex == 'm')
		{
		 cout << "If you see " << friend_name << " please ask him to call me.\n";
		}
	
if (friend_sex == 'f')
		{
		 cout << "If you see " << friend_name << " please ask her to call me.\n";
		}

int age=0;
cout << "Enter your friend's age:\n";
cin >> age;

if (age <=0 || age >=110)
simple_error("You're kidding!");

cout << "I hear you just had your birthday and you are " << age << " years old.\n";
if (age <12)
	cout << "Next year you will be " << age+1 << " years old.\n";
if (age == 17)
	cout << "Next year you will be able to vote.\n";
if (age > 70)
	cout << "I hope you're enjoying retirement.\n";
cout << "Yours sincerely,\n";
string sign;
cin >> sign;
cout << sign;
return 0;
    
}