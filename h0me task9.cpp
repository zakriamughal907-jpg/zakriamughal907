#include <iostream>
using namespace std;
int main()
{
          int age;
          

 cin >> age;
 
 string category = (age < 13) ? "child" :
 (age < 13 && age <= 19) ? "Teenager" :"Adult";
 
 cout << "Age" << age << " falls under the category: " << category << endl;

system("pause");
return 0;
}
                          
