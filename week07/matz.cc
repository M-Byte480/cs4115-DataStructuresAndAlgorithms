#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	double epsilon = 0;

	if (argc > 1 && string(argv[1]) == "-e" ) epsilon = fabs(strtod(argv[2], 0));

	string line;
	while(getline(cin, line))
	{
		istringstream lstream(line) ;

		double val;
		int pos = 1;

		while(lstream >> val)
		{
			if(val > epsilon || val < -epsilon)
				{
					cout << pos << " " << val << " ";
				}
			pos++;
		}
		cout << endl;
	}
	return 0;
}
