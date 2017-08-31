//===============================================
#include "GGlobal.h"
//===============================================
GGlobal::GGlobal() {
    m_mat = 0;
    m_row = 0;
    m_col = 0;
}
//===============================================
GGlobal::GGlobal(const GGlobal& mat) {
    m_row = mat.m_row;
    m_col = mat.m_col;
    m_mat = new double[mat.size()];
    
    for(int i = 0; i < mat.size(); i++) {
        m_mat[i] = mat[i];
    }
}
//===============================================
GGlobal::GGlobal(const int& row, const int& col) {
    m_row = row;
    m_col = col;
    m_mat = new double[size()];
    
    for(int i = 0; i < size(); i++) {
        m_mat[i] = 0;
    }
}
//===============================================
GGlobal::GGlobal(const int& row, const int& col, const double& data) {
    m_row = row;
    m_col = col;
    m_mat = new double[size()];
    
    for(int i = 0; i < size(); i++) {
        m_mat[i] = data;
    }
}
//===============================================
GGlobal::GGlobal(const int& row, const int& col, double* data) {
    m_row = row;
    m_col = col;
    m_mat = new double[size()];
    
    for(int i = 0; i < size(); i++) {
        m_mat[i] = data[i];
    }
}
//===============================================
GGlobal::~GGlobal() {
    if(m_mat == 0) return;
    delete m_mat;
    m_mat = 0;
}
//===============================================
int GGlobal::size() const {
    int m_size = m_row*m_col;
    return m_size;
}
//===============================================
double& GGlobal::operator[](const int& i) const {
    return m_mat[i];
}
//===============================================
ostream& operator<<(ostream& s, const GGlobal& mat) {
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
