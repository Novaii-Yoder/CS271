#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main( ) {

   int month, year, maxMonth, maxYear;
   double price, maxPrice = 0;
   
   // read coffee month, year and price until -1 appears in month
   cin >> month >> year >> price;
   maxMonth = month;
   maxYear = year;
   maxPrice = price;

   while ( !cin.eof() ) {
   
      if ( price > maxPrice )
      {
         maxPrice = price;
         maxMonth = month;
         maxYear = year;
      }

      cin >> month >> year >> price;

   } // end while

   cout << "Maximum Price  $" << setw(8) << fixed << setprecision(2);
   cout << maxPrice << " ";


   if (maxMonth == 1) cout << "January, ";
   if (maxMonth == 2) cout << "February, ";
   if (maxMonth == 3) cout << "March, ";
   if (maxMonth == 4) cout << "April, ";
   if (maxMonth == 5) cout << "May, ";
   if (maxMonth == 6) cout << "June, ";
   if (maxMonth == 7) cout << "July, ";
   if (maxMonth == 8) cout << "August, ";
   if (maxMonth == 9) cout << "September, ";
   if (maxMonth == 10) cout << "October, ";
   if (maxMonth == 11) cout << "November, ";
   if (maxMonth == 12) cout << "December, ";


   cout << maxYear << endl;

} // end main


   


