/**
 * @file Main.cpp
 * @author Elise Lightner
 * @date 2024-09-10
 * @brief building a hello world program
 * 
 * practice program for refuser
 */


#include <iostream>
#include <iomanip>
using namespace std;


int count(int n);
int main() {
  int number;
 
 
  cout << "Hello World!" << endl;
  cout << "Please enter a number: ";
  cin >> number;
  cout << "You chose " << number << " as your number." << endl;
  
int total = count(number);    
  cout << "The sum of numbers from 1 to " << number << " is: " << total << endl;
  return 0;
}
int count(int n){
  int total = 0; 
    for (int i = 0; i <= n; i++) {
        total += i;  
    }
    return total; 
}

