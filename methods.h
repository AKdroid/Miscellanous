/* 
 * File:   methods.h
 * Author: akhil
 *
 * Created on June 29, 2012, 11:07 PM
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#ifndef METHODS_H
#define	METHODS_H

#ifdef	__cplusplus
extern "C" {
#endif

    
int * sieve_of_erastothenes(int n,int *array);

int HCF_Euclidean(int number1,int number2);

double horner_polynomial_expansion(double * coeff,int degree,double value_x);

#ifdef	__cplusplus
}
#endif

#endif	/* METHODS_H */

