#include<fstream>
using namespace std;
int main()
{
	fstream out;
	out.open("regno.txt",ios::out);
	for(int i=11804000;i<=11805000;i++)
	{
	out<<i<<endl;	
	}
}
