#include <iostream>
using namespace std;

/* 
main is the door to the code (telling os to start here)
curly bracket contains the code (like a room) 
make sure to close the curly bracket  or else you will get a syntax error
you can submit as many times as you want and we take best one
*/

int main() {
   int userNum;
   int userNumSquared;
   
   cin >> userNum;
   
   userNumSquared = userNum * userNum;  // Bug here; fix it when instructed
   
   cout << userNumSquared << endl;      // Output formatting issue here; fix it when instructed
   
   cout << "is " << userNum << " squared" << endl;
   return 0;
}
