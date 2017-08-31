//===============================================
#ifndef _GMat_
#define _GMat_
//===============================================
#include <iostream>
#include <iomanip>
//===============================================
using namespace std;
//===============================================
class GMat {
public:
    GMat();
    GMat(const GMat& mat);
    GMat(const int& row, const int& col);
    GMat(const int& row, const int& col, const double& data);
    GMat(const int& row, const int& col, double* data);
    ~GMat();

public:
    double getRow() const;
    double getCol() const;
    void setRow(const int& row);
    void setCol(const int& col);

public:
    bool isNull() const;
    int size() const;
    
public:
    double& operator[](const int& i) const; 
    friend ostream& operator<<(ostream& s, const GMat& mat); 
    
private:
    double* m_mat;
    int m_row;
    int m_col;
};
//===============================================
#endif
//===============================================
