#include <iostream>
using namespace std;
int main() {
//A variable for the user's name
std::string name;
//We enter the user's name
std::cout << "Enter your name: " << endl;
std::cin >> name;
//We output the greeting and the username
std::cout << "Hello World from " << name << "!" << endl;
return 0; 
}