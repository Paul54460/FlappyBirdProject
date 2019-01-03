//
//  Matrix.hpp
//  FlappyBird Genetique C++
//
//  Created by Paul on 31/12/2018.
//  Copyright © 2018 Paul. All rights reserved.
//

#ifndef Matrix_hpp
#define Matrix_hpp

#include <stdio.h>


class Matrix{
    
public:
    
    // Constructeur, matrices remplises par defaut par des float entre 0 et 1
    Matrix(int m, int n);
    Matrix();
    
    // Destrusteur
    ~Matrix();
    
    // Taille de la matrice
    int* shape() const;
    
    // Affichage
    void print() const;
    
    // Remlpis une matrice avec des float aléatoirs entre 0 et 1
    void randomInit();
    // Acces a une valeur de la matrice
    float val(int m, int n) const{return m_values[m][n];}
    // Modification d'une valeur de la matrice
    void set_val(int m, int n, float a){m_values[m][n] = a;}

    
    // Operations sur les matrices
    friend Matrix operator+(const Matrix& A, const Matrix& B);  // Somme
    friend Matrix operator*(const Matrix& A, const Matrix& B);  // Multiplication terme à terme
    Matrix dot(const Matrix& B) const;        // Produit
    Matrix T() const;                         // Transposée
    
private:
    int m_n;
    int m_m;
    float** m_values;
};

#endif /* Matrix_hpp */
