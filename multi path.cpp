#include<iostream>
using namespace std;
class student
{
	protected:
		string name;
	void getst()
	{
		cout<<"enter student name "<<endl;
		cin>>name;
	}
	void showst()
	{
		cout<<"student name ="<<name<<endl;
	}
};
class details:public student
{
	protected:
		int pinno;
		string branch;
	void getd()
	{
		getst();
		cout<<"enter pinno "<<endl;
		cin>>pinno;
		cout<<"enter branch "<<endl;
		cin>>branch;
	}
	void showd()
	{
		showst();
		cout<<"pinno = "<<pinno<<endl;
		cout<<"branch = "<<branch<<endl;
	}
};
class marks:public student
{
	protected:
		int m1,m2,m3;
	void getm()
	{
		cout<<"enter 3 subject marks "<<endl;
		cin>>m1>>m2>>m3;
	}
	void showm()
	{
		cout<<"3 sunject marks are "<<endl;
		cout<<m1<<endl;
		cout<<m2<<endl;
		cout<<m3<<endl;
	}
};
class percentage:public details,public marks
{
	public:
		float per;
	void result()
	{
		getd();
		getm();
		per=(m1+m2+m3)/3;
	}
	void show()
	{
		showd();
		showm();
		cout<<"percentage is "<<per<<endl;
	}
};
int main()
{
	percentage p;
	p.result();
	p.show();
	return 0;
}
