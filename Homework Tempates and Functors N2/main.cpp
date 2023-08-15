#include <iostream>
#include <vector>

template <class T>
class Table
{
	std::vector<std::vector<T>> table;
	int row, col;
public:
	Table(int row, int col) : row(row), col(col)
	{
		table.resize(row, std::vector<T>(col));
	}
	const int size()
	{
		return table.size();
	}
	std::vector<T>& operator[](int i)
	{
		return table[i];
	}
	
};

int main()
{
	auto test = Table<int>(2, 3);
	test[0][1] = 9;
	std::cout << test[0][1];
	return 0;
}