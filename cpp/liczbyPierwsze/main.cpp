#include <iostream>

using namespace std;

int main (){

int zakres;
bool t;
cout<<"Podaj zakres sprawdzania liczb pierwszych: "<<endl;
cin>>zakres;


for(int i = 1; i < zakres + 1; i++)
{
    t = true;
    for(int j = 2; j < i - 1; j++)
    {
    if(i % j == 0)
    t = false;
    }

if (t == true)
cout<<i<<endl;

}
	return 0;
}
