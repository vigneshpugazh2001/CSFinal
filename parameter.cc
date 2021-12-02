#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

/**
 *   @file: paramter.cc
 * @author: Vignesh Pugazhenthi
 *   @date: 12/2/2021
 *  @brief: Short program for 3560 final
 */


int main(int argc, char const *argv[]) {
     for(int i = 1; i < argc; i++){
         cout << argv[i] << " ";
     }
 }