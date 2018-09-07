#ifndef CSTR_h
#define CSTR_h

#include<iostream>
using namespace std;
class cString
{
private:
	int len;
	char *mBuff;
public:
	cString();
	cString(const char*);
	cString(cString&);
	void accept();
	void display();
	void setmBuff(char*);
	char* getmBuff();
	cString& operator=(cString&);
	~cString();
};
#endif