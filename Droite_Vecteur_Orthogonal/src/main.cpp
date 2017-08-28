//===============================================
#include "GLine.h"
//===============================================
void orthogonal1() {    
    GLine m_line1(3, 4, 5);
    GLine m_line2(-4, 3, 9);
    bool m_orthogonal = m_line1.orthogonal(m_line2);   
    
    cout << "m_line1 : " << m_line1 << "\n";
    cout << "m_line2 : " << m_line2 << "\n";
    cout << "m_orthogonal : " << m_orthogonal << "\n";
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    orthogonal1();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
