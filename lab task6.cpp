#include<iostream>
using namespace std;
int main()
{
          //define price of items
          const double item1 =12.95;
          const double item2 =24.95;
          const double item3 =6.95;
          const double item4 =14.95;
          const double item5 =3.95;
          const double salesTaxRate =0.06; // 6% sale tax
          
          //Display price of each item individually
          cout << "Item 1: $" << item1 << endl;
          cout << "Item 1: $" << item1 << endl;
          cout << "Item 1: $" << item1 << endl;
          cout << "Item 1: $" << item1 << endl;
          cout << "Item 1: $" << item1 << endl;
          
          //calculate subtotal
          double subtotal =item1 + item2 + item3 + item4 + item5;
          
          //calculate sales tax
         double salesTax = subtotal * salesTaxRate;
          
          //calculate total amount
          double totalAmount = subtotal + salesTax;
          
          
          //display results
          cout << "\nSubtotal: $" << subtotal << endl;
          cout <<  "Sales Tax(6%): $" << salesTax <<endl;
          cout << "Total Amount: $" << totalAmount << endl;
          
          system("pause");
          
          return 0;
          }
          
                            
