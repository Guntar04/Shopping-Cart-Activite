#include <iostream>
#include <vector>
using namespace std;

vector<string> name;
vector<string> brand;
vector<int> price;
int i = 0;

void productName(string usersPick) {
    name.push_back(usersPick);
    productBrand(usersPick);
}

void productBrand(string usersPick) {
    cout << "Enter the product brand: ";
    cin >> usersPick;
    brand.push_back(usersPick);
    productPrice(usersPick);
}

void productPrice(string usersPick) {
    cout << "Enter the product price: ";
    cin >> usersPick;
    brand.push_back(usersPick);
    cout << "Added" << name[i] << " to the shopping cart.\n\n";
    i++;
    return;
}

int main()
{
    string usersPick;
    while (usersPick != "exit")
    {
        cout << "Enter the product name (or 'exit' to finish): ";
        cin >> usersPick;
        if (usersPick == "exit") {
            exit(0);
        }
        else {
            productName(usersPick);
        }
    }
}