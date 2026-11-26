#include<iostream>
using namespace std;

int main(void)
{
    int ids[7] = {10, 20, 30, 40, 50, 60, 70};
    int target = 60, left = 0, right = 6,mid = (left+right)/2;
    bool flag = false;
    
    
    while (left <= right)
    {
        if (ids[mid] == target){
            cout << "The Target number is at ["<< mid << "] index \n";
            flag = true;
            break;
        }
        else if (ids[mid]< target)
        {
            left = mid + 1;
        }
        else if(ids[mid]> target)
        {
            right = mid - 1;
        }
        mid = (left+right)/2;
       
    }
    if(flag == false)
    {
         cout<<"The ID is not present in the system!!!!!\n";
    }


}
