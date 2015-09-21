//
//  main.cpp
//  BlockMatrix
//
//  Created by Руслан on 21.09.15.
//  Copyright © 2015 MIPT. All rights reserved.
//

#include <iostream>
#include "RSMatrixMultiplyer.hpp"

int main(int argc, const char * argv[]) {
    RSMatrixMultiplyer multiplyer = *new RSMatrixMultiplyer;
    // insert code here...
    int** matr = new int*[3];
    for (int i = 0; i < 3; i++) {
        matr[i] = new int[3];
    }
    for (int i = 0; i<3; i++) {
        for (int j = 0; j < 3; j++) {
            matr[i][j] = 1;
        }
    }
    int** res = multiplyer.multiplySquareMatrixes(matr, matr, 3);
    multiplyer.printMatrix(res, 3);
    return 0;
}
