//===============================================
#include "GVec.h"
//===============================================
void crossProduct1() {    
    GVec m_vec1(3, 4, 5);
    GVec m_vec2(6, 7, 9);
    GVec m_cross = m_vec1.cross(m_vec2);
    
    cout << "m_vec1 : " << m_vec1 << "\n";
    cout << "m_vec2 : " << m_vec2 << "\n";
    cout << "m_cross : V1^V2 : " << m_cross << "\n";
}
//===============================================
void crossProduct2() {    
    GVec m_vec1(3, 4, 5);
    GVec m_vec2(6, 7, 9);
    GVec m_cross = m_vec2.cross(m_vec1);
    
    cout << "m_vec1 : " << m_vec1 << "\n";
    cout << "m_vec2 : " << m_vec2 << "\n";
    cout << "m_cross : V2^V1 : " << m_cross << "\n";
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    crossProduct1();
    cout << "-------------------------------------------------\n";
    crossProduct2();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
