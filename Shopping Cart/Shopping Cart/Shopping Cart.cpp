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

void productName(string usersPick) {

}

int main()
{
    string usersPick;
    cout << "Enter the product name (or 'exit' to finish)";
	cin >> usersPick;


    if (usersPick == "exit") {
        exit(0);
    }
    else {
        productName(usersPick);
    }
}