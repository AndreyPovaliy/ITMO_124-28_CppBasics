#include <iostream> 


using namespace std;
int main()
{
	int k, m;
	int s = 0;
	cin >>  k;
	cin >>  m;

	
	for (int i = 1; i <= 100; i++)
	{
		if ((i > k) && (i < m))
			continue;
		s += i;
	}
	cout << "Total sum is: " << s << endl;
	return 0;
}