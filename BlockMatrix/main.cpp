//
//  main.cpp
//  BlockMatrix
//
//  Created by Руслан on 21.09.15.
//  Copyright © 2015 MIPT. All rights reserved.
//

#include <iostream>
#include "RSMatrixMultiplyer.hpp"
#include "time.h"

int main(int argc, const char * argv[]) {
    RSMatrixMultiplyer multiplyer = *new RSMatrixMultiplyer;
    int** matr1 = multiplyer.generateRandMatrix(1024);
    int** matr2 = multiplyer.generateRandMatrix(1024);
    
    std::cout << "all matrixes successfully generated \n";
    
    clock_t startTime = clock();
    int** res1 = multiplyer.multiplySquareMatrixes(matr1, matr2, 1024);
    clock_t endTime = clock();
    
    std::cout << "Time for ordinary multiplication " << (endTime - startTime)/CLOCKS_PER_SEC << "\n";
    
    int** matr1_t = multiplyer.transponMatrix(matr1, 1024);
    int** matr2_t = multiplyer.transponMatrix(matr2, 1024);
    
    startTime = clock();
    
    int** res2 = multiplyer.transponMultiplySquareMatrixes(matr1_t, matr2_t, 1024);
    
    endTime = clock();
    std::cout << "Time for transpon multiplication " << (endTime - startTime)/CLOCKS_PER_SEC << "\n";

//    multiplyer.printMatrix(res1, 1024);
//    multiplyer.printMatrix(res2, 1024);
    return 0;
}
