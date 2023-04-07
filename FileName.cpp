#include <iostream>
#include <string>
using namespace std;

struct youJoe 
{
	string Name;
	float Health;
	int level;
	float Damage;
	void Attack();
};

int main()
{
	youJoe Joe;
	Joe.Name = "Joe";
	Joe.Health = 100.f;
	Joe.level = 1;
	Joe.Damage = 2.5f;
	Joe.Attack();
	
	youJoe Lisa;
	Lisa = { "Lisa",100.f,3,15.f };
	Lisa.Attack();
}

void youJoe::Attack()
{
	cout << Name << "does" << Damage << "damage!" << endl;
}