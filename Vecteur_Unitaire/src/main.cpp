//===============================================
#include "GVec.h"
//===============================================
void normalize1() {
    GVec m_vec1(3, 4);
    GVec m_norm1 = m_vec1.normalize();
    double m_lengthVec1 = m_vec1.length();
    double m_lengthNorm1 = m_norm1.length();

    cout << "m_vec1 : " << m_vec1 << "\n";
    cout << "m_norm1 : " << m_norm1 << "\n";
    cout << "m_lengthVec1 : " << m_lengthVec1 << "\n";
    cout << "m_lengthNorm1 : " << m_lengthNorm1 << "\n";
}
//===============================================
void normalize2() {
    GVec m_vec1(3, 4, 5);
    GVec m_norm1 = m_vec1.normalize();
    double m_lengthVec1 = m_vec1.length();
    double m_lengthNorm1 = m_norm1.length();

    cout << "m_vec1 : " << m_vec1 << "\n";
    cout << "m_norm1 : " << m_norm1 << "\n";
    cout << "m_lengthVec1 : " << m_lengthVec1 << "\n";
    cout << "m_lengthNorm1 : " << m_lengthNorm1 << "\n";
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    normalize1();
    cout << "-------------------------------------------------\n";
    normalize2();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
