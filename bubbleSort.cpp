#include <iostream>
using namespace std;

int main(void)
{
  int scores[4] = {50, 20, 40, 10};
  int temp = 0,n = 3;
  cout<< "\n\n ScoreBord Before Sorting:- ";
  for ( int k = 0 ; k < 4; k++){  
      cout<<scores[k]<<" ";
    }

  for (int i = 0 ; i < n ; i++){
    for(int j =0 ; j < n-i; j++ )
    {
        if ( scores[j] > scores[j+1])
            {
                temp = scores[j];
                scores[j]=scores[j+1];
                scores[j+1] = temp; 
            }
    }
  } 
  cout<< "\n\n ScoreBord After  Sorting:- ";
  for ( int k = 0 ; k < 4; k++){  
      cout<<scores[k]<<" ";
    }

    return 0;
  
}