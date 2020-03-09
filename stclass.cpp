#include<iostream>
using namespace std;

class X
{
	
	public:
		int i;
		static int j;
		static void getCount()
		{
			cout<<X::j<<" Objects have been made for this class.\n";
		}
		X():i(0){
			j+=1;
			}
		X(int i1):i(i1){
			j+=1;
			}
		void Printval()
		{
			cout<<"Value stored is: "<<i<<endl;
		}
};

int X::j=0;

int main()
{
	X a1;
	X a2(1);
	X a3(45);

	a2.Printval();
	X::getCount();
	return 0;
};
