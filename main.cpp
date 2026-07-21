#include <iostream>
using namespace std;
 
int main()
{
   int rows, columns;
 
   cout << "Enter rows and columns: ";
   cin >> rows >> columns;
 
   int numbers[100][100];
   int sum = 0;
 
   cout << "Enter array elements:\n";
 
   for (int i = 0; i < rows; i++)
   {
       for (int j = 0; j < columns; j++)
       {
           cin >> numbers[i][j];
           sum += numbers[i][j];
       }
   }
 
   cout << "Sum of all elements = " << sum;
 
   return 0;
}
