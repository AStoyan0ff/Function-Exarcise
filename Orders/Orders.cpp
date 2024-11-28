#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

static double functionOrder(const string& product, int quantity) {

   double price = 0.0;
    
   if (product == "coffee") {
       price = 1.50;
   }
   else if (product == "water") {
       price = 1.00;
   }
   else if (product == "coke") {
       price = 1.40;
   }
   else if (product == "snacks") {
       price = 2.00;
   }

   return price * quantity;
}

int main() {
   
   string product; cin >> product;
   int quantity; cin >> quantity;

   double totalPrice = functionOrder(product, quantity);

   cout << setprecision(2) << fixed << totalPrice << endl;

   return 0;
      
}


