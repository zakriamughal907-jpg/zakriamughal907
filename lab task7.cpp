#include<iostream>
#include<iomanip> //for std::fixed and std::setprecision

int main(){
// predefined test scores
double score1 = 85.5;
double score2 = 90.75;
double score3 = 88.25;

// calculate the average
double average =(score1 + score2 +score3)/ 3;

//display the average rounded to two decimal places
std::cout << "The average of " << score1 << " , "<< score2 << " and "<< score3 << " = ";
std::cout << std::fixed << std::setprecision(2) << average << std::endl;
system("pause");
return 0;
} 
