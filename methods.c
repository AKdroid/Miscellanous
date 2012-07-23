#include<methods.h>

int * sieve_of_erastothenes(int n,int *array){
    /*
     * Sieve of Erastothenes is a method to find prime numbers
     * by sieving through an array listing numbers from 1 to n
     *  
     */
    int i,j;
    for(i=0;i<n;i++){
        array[i]=i+1;
    }
    for(i=2;i<=sqrt(n);i++){
        for(j=0;j<n;j++){
            if(array[j]%i==0&&array[j]!=i)
                array[j]=0;
        }
       
    }
    array[0]=0;
    return array;
}

int HCF_Euclidean(int number1,int number2){
    /*
     * Euclidean's method of finding HCF is a method to calculate HCF of
     * two numbers recursively
     */
    int temp,HCF;
    if(number1<number2){
        temp=number2;
        number2=number1;
        number1=temp;
    }
    if(number1%number2){
        HCF=HCF_Euclidean(number2,number1%number2);
    }
    else
        HCF=number2;
    return HCF;
}

double horner_polynomial_expansion(double * coeff,int degree,double value_x){
    /*
     * Horner's Polynomial Expansion is a method of 
     * finding the value of a polynomial having co-efficients
     * coeff,and having value of x = value_x
     * 
     * P(x)=a_0+x(a_1+x(a_2+ .........+x(a_(degree-1)+xa_degree)......))
     * 
     */
    
    int i=0;
    double sum=0;
    for(i=degree;i>=0;i--){
        sum=coeff[i]+sum*value_x;
    }
    return sum;
    
}

int * max_running_sum_linear(int *array,int length,int *result){
    /*
     * the maximum sub-array problem
     * returns a value of (left index,right index,sum)
     * 
     * complexity O(n) -- linear
     */
    int j=0,sum=1<<31,start,end,last=0;
    while(j<length){
        int l=last+array[j];
        
        last=l>array[j]?l:array[j];
        
        sum=sum>last?sum:last;
        
        if(sum==last){
            end=j;
            if(sum==array[j])
                start=j;
        }
        j++;
    }
    result[0]=start;
    result[1]=end+1;
    result[2]=sum;
    return result;
    
}