//===============================================
#include "GGlobal.h"
//===============================================
void dotProduct1() {    
    GVec m_vec1(3, 4, 5);
    GVec m_vec2(6, 7, 9);
    double m_dot = GGeo::dot(m_vec1, m_vec2);
    
    cout << "m_vec1 : " << m_vec1 << "\n";
    cout << "m_vec2 : " << m_vec2 << "\n";
    cout << "m_dot : V1.V2 : " << m_dot << "\n";
}
//===============================================
void dotProduct2() {    
    GVec m_vec1(3, 4, 5);
    GVec m_vec2(6, 7, 9);
    double m_dot = GGeo::dot(m_vec2, m_vec1);
    
    cout << "m_vec1 : " << m_vec1 << "\n";
    cout << "m_vec2 : " << m_vec2 << "\n";
    cout << "m_dot : V2.V1 : " << m_dot << "\n";
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    dotProduct1();
    cout << "-------------------------------------------------\n";
    dotProduct2();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
