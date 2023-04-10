#include<iostream>
using namespace std;
class car
{
	string name;
	int num;

	public:
		car(string a, int n)
		{
			cout << "Constructor called" << endl;
			this->name = a;
			this ->num = n;
		}

		void enter()
		{
			cin>>name;
			cin>>num;
		}

		void display()
		{
			cout << "Name: " << name << endl;
			cout << "Num: " << num << endl;
		}
};

int main()
{
	car p=car("rahul",1);
   // p.car("rahul",1);
	p.display();
}
