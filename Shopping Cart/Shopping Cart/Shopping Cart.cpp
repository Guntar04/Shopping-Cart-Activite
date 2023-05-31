#include <iostream>
#include <vector>
using namespace std;

struct Product
{
    string name;
    string brand;
    int price;
};

vector<Product> items;

int main()
{
    string usersPick;
    cout << "Enter the product name (or 'exit' to finish)";
	cin >> usersPick;

	switch (usersPick)
	{
	case 'exit':
	default:
		break;
	}
}