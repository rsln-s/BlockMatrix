//
//  RSMatrixMultiplyer.hpp
//  BlockMatrix
//
//  Created by Руслан on 21.09.15.
//  Copyright © 2015 MIPT. All rights reserved.
//

#ifndef RSMatrixMultiplyer_hpp
#define RSMatrixMultiplyer_hpp

#include <stdio.h>

class RSMatrixMultiplyer {
    
public:
    void printMatrix(int** matr, int size);
    int** allocateMatrix(int size);
    int** generateRandMatrix(int size);
    int** multiplySquareMatrixes(int** matr1, int** matr2, int size);
    int** transponMatrix(int** matr, int size);
    int** transponMultiplySquareMatrixes(int** matr1, int** matr2, int size);
};

#endif /* RSMatrixMultiplyer_hpp */
