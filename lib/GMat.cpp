//===============================================
#include "GMat.h"
//===============================================
GMat::GMat() {
    m_mat = 0;
    m_row = 0;
    m_col = 0;
}
//===============================================
GMat::GMat(const GMat& mat) {
    m_row = mat.m_row;
    m_col = mat.m_col;
    m_mat = new double[mat.size()];
    
    for(int i = 0; i < mat.size(); i++) {
        m_mat[i] = mat[i];
    }
}
//===============================================
GMat::GMat(const int& row, const int& col) {
    m_row = row;
    m_col = col;
    m_mat = new double[size()];
    
    for(int i = 0; i < size(); i++) {
        m_mat[i] = 0;
    }
}
//===============================================
GMat::GMat(const int& row, const int& col, const double& data) {
    m_row = row;
    m_col = col;
    m_mat = new double[size()];
    
    for(int i = 0; i < size(); i++) {
        m_mat[i] = data;
    }
}
//===============================================
GMat::GMat(const int& row, const int& col, double* data) {
    m_row = row;
    m_col = col;
    m_mat = new double[size()];
    
    for(int i = 0; i < size(); i++) {
        m_mat[i] = data[i];
    }
}
//===============================================
GMat::~GMat() {
    if(m_mat == 0) return;
    delete m_mat;
    m_mat = 0;
}
//===============================================
int GMat::getRow() const {
    return m_row;
}
//===============================================
int GMat::getCol() const {
    return m_col;
}
//===============================================
void GMat::setRow(const int& row) {
    m_row = row;
}
//===============================================
void GMat::setCol(const int& col) {
    m_col = col;
}
//===============================================
int GMat::size() const {
    int m_size = m_row*m_col;
    return m_size;
}
//===============================================
GMat& GMat::operator=(const GMat& mat) {
    if(m_mat != 0) delete[] m_mat;
    m_row = mat.m_row;
    m_col = mat.m_col;
    m_mat = new double[mat.size()];
    
    for(int i = 0; i < mat.size(); i++) {
        m_mat[i] = mat[i];
    }
    return *this;
}
//===============================================
double& GMat::operator[](const int& i) const {
    return m_mat[i];
}
//===============================================
GMat operator+(const GMat& mA, const GMat& mB) {
    assert((mA.m_row == mB.m_row) && (mA.m_col == mB.m_col));
    GMat mC(mA.m_row, mA.m_col);
    
    for(int i = 0; i < mA.m_row; i++) {
        for(int j = 0; j < mA.m_col; j++) {
            int ij = i*mA.m_col + j;
            mC[ij] = mA[ij] + mB[ij];
        }
    }
    return mC;
}
//===============================================
GMat operator-(const GMat& mA, const GMat& mB) {
    assert((mA.m_row == mB.m_row) && (mA.m_col == mB.m_col));
    GMat mC(mA.m_row, mA.m_col);
    
    for(int i = 0; i < mA.m_row; i++) {
        for(int j = 0; j < mA.m_col; j++) {
            int ij = i*mA.m_col + j;
            mC[ij] = mA[ij] - mB[ij];
        }
    }
    return mC;
}
//===============================================
GMat operator*(const GMat& mA, const GMat& mB) {
    assert(mA.m_col == mB.m_row);
    GMat mC(mA.m_row, mB.m_col);
    
    for(int i = 0; i < mA.m_row; i++) {
        for(int j = 0; j < mB.m_col; j++) {
            for(int k = 0; k < mA.m_col; k++) {
                int ik = i*mA.m_col + k;
                int kj = k*mB.m_col + j;
                int ij = i*mB.m_col + j;
                mC[ij] += mA[ik]*mB[kj];
            }
        }
    }
    return mC;
}
//===============================================
GMat operator*(const GMat& mA, const double& k) {
    GMat mC(mA.m_row, mA.m_col);
    
    for(int i = 0; i < mA.m_row; i++) {
        for(int j = 0; j < mA.m_col; j++) {
            int ij = i*mA.m_col + j;
            mC[ij] = mA[ij]*k;
        }
    }
    return mC;
}
//===============================================
GMat operator*(const double& k, const GMat& mA) {
    GMat mC(mA.m_row, mA.m_col);
    
    for(int i = 0; i < mA.m_row; i++) {
        for(int j = 0; j < mA.m_col; j++) {
            int ij = i*mA.m_col + j;
            mC[ij] = mA[ij]*k;
        }
    }
    return mC;
}
//===============================================
ostream& operator<<(ostream& s, const GMat& mat) {
    if(mat.m_mat == 0) return s;
    int k = 0;
    
    for(int i = 0; i < mat.m_row; i++) {
        for(int j = 0; j < mat.m_col; j++) {
            if(j != 0) s << " ; ";
            s << setw(3) << mat[k++];
        }
        s << "\n";
    }
        
    return s;
}
//===============================================
