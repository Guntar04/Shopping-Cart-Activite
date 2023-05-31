#include <iostream>
#include <vector>
using namespace std;

struct Product
{
    string name;
    string brand;
    int price;
};

vector<string> name;
vector<string> brand;
vector<int> price;

void productName(string usersPick) {
    name.push_back(usersPick);
    productBrand(usersPick);
}

void productBrand(string usersPick) {
    cout << "Enter the product brand:\n";
    cin >> usersPick;
    brand.push_back(usersPick);
}

int main()
{
    string usersPick;
    while (usersPick != "exit")
    {
        cout << "Enter the product name (or 'exit' to finish) ";
        cin >> usersPick;
        if (usersPick == "exit") {
            exit(0);
        }
        else {
            productName(usersPick);
        }
    }
}