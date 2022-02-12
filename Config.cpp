#include "Config.h"

void ShowStr(string s) {
	cout << s << endl;
}

struct student
{
	string Name;
};
struct teacher
{
	string Name = "wang";
	student stu;
};

void structDemo() {
	teacher t;
	student st = { "wang" };
	t.Name = "zhang";
	t.stu = st;
	cout << t.stu.Name << endl;
}

void basicDemo() {
	int a[] = { 1,2,3,4,5 };
	int* p = a;
	cout << *p << endl;
	p++;
	cout << *p << endl;
	cout << p[0] << endl;
	cout << p[1] << endl;
}

int ConsoleAppDemo()
{
	while (true)
	{
		int n;
		cout << "1. input your select  0 exit" << endl;
		cout << "2. input your select  others continue" << endl;
		cin >> n;

		switch (n)
		{
		case 0:
			cout << "bye bye" << endl;
			return 0;
		case 1:
			cout << "continue" << endl;
			break;
		default:
			break;
		}

	}
}