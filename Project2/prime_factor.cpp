#include <vector>

using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int number)
	{
		vector<int> result = {};

		if (1 < number)
		{
			result.push_back(number);
		}

		return result;
	}
};
