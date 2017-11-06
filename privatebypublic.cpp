#include<bits/stdc++.h>
using namespace std;
class A
{
int a,b;
public:
void getdta()
{
	cin>>a>>b;
	}	
	void putdata()
	{
		cout<<a<<" "<<b<<endl;
	}
};
class B
{
	public:
	int a,b;

void getdta()
{
	cin>>a>>b;
	}	
	void putdata()
	{
		cout<<a<<" "<<b<<endl;
	}	
};

int main()
{
	A a;
	B b;
	a.getdta();
	a.putdata();
		fstream ob1("a.txt");
	ob1.write((char*)&a,sizeof(a));
	ob1.close();
	ob1.open("a.txt");
	ob1.read((char*)&b,sizeof(b));
	b.putdata();
	return 0;
}
