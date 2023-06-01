#include <iostream>
#include <vector>
using namespace std;

vector<string> name;
vector<string> brand;
vector<int> price;
int i = 0;

void productName(string usersPick) {
    name.push_back(usersPick);
}

void productBrand(string usersPick) {
    cout << "Enter the product brand: ";
    cin >> usersPick;
    brand.push_back(usersPick);
}

void productPrice() {
    int userPick;
    cout << "Enter the product price: ";
    cin >> userPick;
    price.push_back(userPick);
    cout << "Added " << name[i] << " to the shopping cart.\n\n";
    i++;
    return;
}

void displayCart() {
    if (size(name) == 0){
        cout << "\nThere are no items in the cart\n\n";
        return;
    }
    for (int s = 0; s < size(name); s++) {
        cout << "\nProduct Name: "<< name[s] <<"\n";
        cout << "Product Brand: " << brand[s] << "\n";
        cout << "Product Price: " << price[s] << "\n\n";
    }
}

int main()
{
    string usersPick;
    while (usersPick != "exit")
    {
        cout << "Enter the product name ('display' to show the cart or 'exit' to finish): ";
        cin >> usersPick;
        if (usersPick == "exit") {
            exit(0);
        }
        else if(usersPick == "display"){
            displayCart();
        }
        else {
            productName(usersPick);
            productBrand(usersPick);
            productPrice();
        }
    }
}