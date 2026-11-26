#include <iostream>
using namespace std;

int main(void)
{   
    int productIDs[6] = {405, 102, 890, 215, 630, 310},n = 6;
    int target = 0,temp =0;
   

// shorting the array with bubbl
    for(int i = 0; i < n-1 ; i++ ){
        for(int j = 0 ; j < n-i-1 ; j++){
            if (productIDs[j]> productIDs[j+1])
            {
                temp = productIDs[j];
                productIDs[j]= productIDs[j+1];
                productIDs[j+1]= temp;
            }
        }
    }
    cout<<"\n\nSorted Productlist :- ";
    for(int k = 0 ; k < n ; k++)
    {
        cout<< productIDs[k]<<" ";
    }

     cout<<"\n\nEnter the product Id you are looking for:- ";
     cin>> target; 

// find the target product with binary search

    int start = 0,end = 5 ;
    int mid = (start+end)/2;
    bool flag = false;
    while(start <=  end)
    {
        if(productIDs[mid] == target )
        {
            cout<< "\n\n the product id {"<<target<<"} is at Index Number ["<< mid <<"]\n\n";
            flag = true;
            break;
        }
        else if ( productIDs[mid]< target)
        {
            start = mid + 1;
        }
        else if (productIDs[mid]> target)
        {
            end = mid - 1;
        }
           mid = (start+end)/2;
    }


        if (flag == false)
        {
            cout<<"The Product ID not found";
        }


    return 0;
}