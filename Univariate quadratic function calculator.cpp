#include <iostream>
 
int main();
 
int main() {
 double a{};
 double b{};
 double c {};
 double x {};
 
 std::cout << "Enter a value for a:";
 std::cin >> a;
 
 std::cout << "Enter a value for b:";
 std::cin >> b;
 
 std::cout << "Enter a value for c:";
 std::cin >> c;
 
 std::cout << "Enter a value for x:";
 std::cin >> x;
 
 std::cout <<"The result of ax^2 + bx + c = " << a*x*x + b*x + c;
 
 return 0;
 
}