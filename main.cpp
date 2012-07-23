/* 
 * File:   main.cpp
 * Author: akhil
 *
 * Created on June 29, 2012, 11:07 PM
 */

#include <cstdlib>
#include<iostream>
#include "methods.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
     
    //Evaluate a polynomial of degree 2 with a value of x
    
    double coeffs[]={1,0,1};
    double x_value=4;
    double val=horner_polynomial_expansion(coeffs,2,x_value);
    cout<<val<<endl;
    
    //Finding max array value
    
    int numericarray[]={1,2,-1,4,-5,6},result[3];
    result=max_running_sum_linear(numericarray,6,result);
    
    cout<<"MAX-ARRAY\n"<<result[0]<<endl<<result[1]<<endl<<result[2]<<endl;
    
    //Get HCF of x and y
    
    int x=20,y=14;
    int HCF=HCF_Euclidean(x,y);
    cout<<HCF<<endl;
    
    //Find prime numbers from 1 to 100
    
    int array[100];
    sieve_of_erastothenes(100,array);
    for(int i=0;i<100;i++){
        if(array[i]!=0)
            cout<<array[i]<<endl;
    }
    
    return 0;
}

