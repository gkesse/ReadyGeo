//===============================================
#include "GVec2D.h"
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    GVec2D m_vec1(3, 4);
    GVec2D m_norm1 = m_vec1.normalize();
    double m_lengthVec1 = m_vec1.length();
    double m_lengthNorm1 = m_norm1.length();

    cout << "m_vec1 : " << m_vec1 << "\n";
    cout << "m_norm1 : " << m_norm1 << "\n";
    cout << "m_lengthVec1 : " << m_lengthVec1 << "\n";
    cout << "m_lengthNorm1 : " << m_lengthNorm1 << "\n";
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
