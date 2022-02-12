#include "Config.h"

#pragma region demos
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
#pragma endregion


int main() {


}





