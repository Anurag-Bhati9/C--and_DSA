#include <iostream>
using namespace std;

int main(void) {
    
    int drainLog[6] = { 12, 18, 9, 22, 14, 11};
   int maxDrain = drainLog[0], minDrain = drainLog[0], avgDrain = 0 , add = 0 , count = 0;


   for (int i = 0 ; i < 6 ; i++)
   {
            if(drainLog[i] > maxDrain  )
        {

                maxDrain = drainLog[i];
                   
                
        }
        else if (drainLog[i] < minDrain)
        {
                minDrain = drainLog[i];
               
        }
         add += drainLog[i];
         count++;
   }
   
    cout << "Maximum Drain:"<< maxDrain  <<'\n';
    cout << "Minimum Drain:"<< minDrain  <<'\n';
    cout << "Average Drain:" << ((float)add/count) <<'\n';

} 