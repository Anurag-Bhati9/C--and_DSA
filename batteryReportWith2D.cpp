#include<iostream>
using namespace std;
/*
int main(void)
{
    int panelOutput[3][3] = {
        {105, 112, 109},
        {98, 120, 115},
        {101, 108, 111}
    };
    
    int maxWattage = panelOutput[0][0], totalWattage = 0;
    
    for (int row = 0 ; row < 3 ; row++){
        for (int column = 0 ; column < 3 ; column++){
            
        if (panelOutput[row][column] >  maxWattage)
        maxWattage = panelOutput[row][column];
        
        
        totalWattage += panelOutput[row][column];
    }
}
cout << " Maximum Wattage Produced in a Houre: " << maxWattage << '\n';
cout << " Total Wattage Produced : " << totalWattage << '\n';

}

*/

int main(void)
{
    int panelOutput[3][3] = {
      {105, 112, 109},
    {98, 120, 115},
    {101, 108, 111}
    };
    
    int  diagonalTotalWattage = 0;
    
    for (int i = 0 ; i < 3 ; i++){
        if(panelOutput[i][i]){
            diagonalTotalWattage += panelOutput[i][i]; 
        }
    }
    cout << "Diagonal Total is : "<< diagonalTotalWattage <<'\n';

}