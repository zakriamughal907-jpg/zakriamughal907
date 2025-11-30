#include <iostream>
using namespace std;
int main()
{
          double balance;
          int loyal;
          
cout << "Enter account balance: ";
cin >> balance;

cout << "Are you loyal coustomer? (1 = Yes,0 = No): ";
cin >> loyal;

string accountType = (balance < 100) ? "Low Balance Account"  :(balance <= 500) ? "Standard Account" : "Premium Account";
string offer =((balance >200) && (loyal ==1))? "Eligible for special offer" : "Not Eligible for special offer" ;
cout << "\nAccount Type: " << accountType << endl;
cout <<"special offer: " << offer << endl;
system("pause");
return 0;
}        
