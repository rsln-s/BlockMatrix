//
//  RSMatrixMultiplyer.cpp
//  BlockMatrix
//
//  Created by Руслан on 21.09.15.
//  Copyright © 2015 MIPT. All rights reserved.
//

#include "RSMatrixMultiplyer.hpp"
#include <iostream>

void RSMatrixMultiplyer::printMatrix(int** matr, int size){
    for (int i = 0; i<3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout<<matr[i][j] << " ";
        }
        std::cout<<"\n";
    }
}


int** RSMatrixMultiplyer::multiplySquareMatrixes(int** matr1, int** matr2, int size){
    int** result = new int*[size];
    for (int i = 0; i < size; i++) {
        result[i] = new int[size];
    }
    for (int s = 0; s < size; s++) {
        for (int d = 0;  d < size; d++) {
            result[s][d] = 0;
            for (int k = 0; k < size; k++) {
                result[s][d]+=matr1[s][k]*matr2[k][d];
            }
        }
    }
    return result;
}
