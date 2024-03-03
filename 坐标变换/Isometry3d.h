#pragma once
#ifndef ISOMETRY3D_H
#define ISOMETRY3D_H
#include"Matrix.h"
#include<bits\stdc++.h>
using namespace std;

class Isometry3d{
public:
    Isometry3d(vector<double> t, Matrix R) {
        T = Matrix(4, 4); // 初始化 T 对象

        // 为 T.row 分配内存空间，并确保足够的空间来存储列向量
        T.row = new std::vector<Row>(4);
        
        for (int i = 0; i < 4; ++i) {
            (*T.row)[i].column.resize(4);
        }
        
        // 填充数据
        (*T.row)[0].column[3] = t[0];
        (*T.row)[1].column[3] = t[1];
        (*T.row)[2].column[3] = t[2];
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                (*T.row)[i].column[j] = R.row->at(i).column[j];
            }
        }
        (*T.row)[3].column[0] = 0;
        (*T.row)[3].column[1] = 0;
        (*T.row)[3].column[2] = 0;
        (*T.row)[3].column[3] = 1;
    }

	Matrix T;
};

#endif