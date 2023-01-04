#include <iostream>

using namespace std;

long int Factoriel(int n)
{
    long int fact = 0;
    if (n == 1)
    {
       return 1;
    }
    else
    {
       cout << n << endl;
       return fact = (Factoriel (n-1)*n )* (Factoriel (n-1));
    }
}

int main()
{
	long fact = Factoriel(5);
    cout << fact << endl;
    
    
    
	return 0;
}
