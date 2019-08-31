// Name:
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double cost,tax,tip;
  double total;

//get thye cost of the meal
  std::cout << "What is the total \"cost\" of the meal? ";
  std::cin >> cost;

  //what is the tax of the meal?
  tax = cost * .0775;
  std::cout << "The \"tax\" of the cost is"<<tax<<" dollars./n";

//calculate the tip.
tip= cost * .2;

//display the tip.
std::cout << "The \"tip\" of the cost is"<<tip<<" dollars./n";

// calculate the total
total= cost+tax+tip;

//display total
std::cout << "The \"total\" of the cost is"<<total<<" dollars./n";

  return 0;
}
