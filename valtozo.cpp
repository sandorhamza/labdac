#include <iostream>

using namespace std;

int main()
{
	int a=43;
	int b=543;

	cout<<a<<" "<<b<<endl;

	b=a+b;
	a=b-a;
	b=b-a;

	cout<<a<<" "<<b<<endl;
	



	return 0;
}