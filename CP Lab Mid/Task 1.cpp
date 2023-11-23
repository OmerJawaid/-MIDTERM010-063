#include<iostream>
using namespace std;
int main()
{
	char choice;
	do {
		int quantity;
			float price,tax,totalprice,discount;
		cout << "Enter the the price of the product: ";
		cin >> price;
		if (price <= 0)
			cout << "Invalid Price.";
		else
		{
			cout << "Enter the quantity of product: ";
			cin >> quantity;
			if (quantity <= 0)
				cout << "Quantity should be greater than 0.";
			else
			{
				cout << "Enter the tax rate(Enter in percent): ";
				cin >> tax;
				if (tax < 0)
					cout << "Tax should be 0 or more.";
				else
				{
					price *= quantity;
					tax /= 100;
					tax *= price;
					totalprice = price + tax;
					if (quantity >= 10)
					{
						cout << "You got 10% Discount.\n";
						discount = totalprice * 0.1;
						cout << "Total Cost = " << totalprice - discount;
					}
					else
						cout << "Total Cost = " << totalprice;
				}
			}
		}
		cout <<"\nDo you want to calculate more(Y/N)?";
		cin >> choice;
	} while (choice != 'N' && choice != 'n');
}