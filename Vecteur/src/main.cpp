//===============================================
#include "GVec.h"
//===============================================
void vector1() {
    GVec m_vec1;
    GVec m_vec2(3, 4);
    GVec m_vec3 = m_vec1;
    GVec m_vec4 = m_vec2;
    
    cout << "m_vec1 : " << m_vec1 << "\n";
    cout << "m_vec2 : " << m_vec2 << "\n";
    cout << "m_vec3 : " << m_vec3 << "\n";
    cout << "m_vec4 : " << m_vec2 << "\n";
}
//===============================================
void vector2() {
    GVec m_vec1(true);
    GVec m_vec2(3, 4, 5);
    GVec m_vec3 = m_vec1;
    GVec m_vec4 = m_vec2;
    
    cout << "m_vec1 : " << m_vec1 << "\n";
    cout << "m_vec2 : " << m_vec2 << "\n";
    cout << "m_vec3 : " << m_vec3 << "\n";
    cout << "m_vec4 : " << m_vec4 << "\n";
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    vector1();
    cout << "-------------------------------------------------\n";
    vector2();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
