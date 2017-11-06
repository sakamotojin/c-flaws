#include<bits/stdc++.h>
using namespace std;
class inv
{
	int r;
	int q;
	public:
		void getd()
		{
			cin>>r>>q;
		}
};
int main()
{
	inv a;
	a.getd();
	fstream ob1("a.txt");
	ob1.write((char*)&a,sizeof(a));
	ob1.close();
	ob1.open("a.txt");
	ob1.seekg(0,ios::beg);
	string a1;
	getline(ob1,a1);
	cout<<a1;
	int bc[100];
	for(int i=0;i<a1.length();i++)
	cout<<a1[i]<<"  "<<int(a1[i]);
	return 0;
}
