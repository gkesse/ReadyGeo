//===============================================
#ifndef _GMat_
#define _GMat_
//===============================================
#include <iostream>
//===============================================
using namespace std;
//===============================================
class GMat {
public:
    GMat();
    GMat(const GMat& mat);
    GMat(const int& row, const int& col);
    ~GMat();

public:
    double getRow() const;
    double getCol() const;
    void setRow(const int& row);
    void setCol(const int& col);

public:
    bool isNull() const;
    
public:
    friend ostream& operator<<(ostream& s, const GMat& vec); 
    friend GMat operator/(const GMat& vec, const double& d);
    
private:
    double* m_mat;
    int m_row;
    int m_col;
};
//===============================================
#endif
//===============================================
