#include "Functions.h"

string createPyramid(int num)
{
    if (num == 0){
        return "Invalid pyrimad size";
    }
    else if (num < 0){
        return "Negative pyrimad size";
    }
    
    std:string str;
    int iter = 1;
    for (int i = 0; i < num; num++){
        int j = 0;
        while (j < iter){
            str = str + "-";
            j++;
        }
        iter++;
        iter++;
        int k = 0;
        while (k <= i+1){
            str = str + "|";
            k++;
        }
    }
    
  
    //do the end case seperately
    //add spaces
    return str;
}

int getUserInput()
{
    std:cout<<"requesting pyrimad size";
    return 0;
    //need to return the size

}
