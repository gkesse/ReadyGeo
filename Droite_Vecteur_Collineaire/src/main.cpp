//===============================================
#include "GLine.h"
//===============================================
void collinear1() {    
    GLine m_line1(3, 4, 5);
    GLine m_line2(-4, 3, 9);
    bool m_collinear1 = m_line1.collinear(m_line1);   
    bool m_collinear2 = m_line1.collinear(m_line2);   
    
    cout << "m_line1 : " << m_line1 << "\n";
    cout << "m_line2 : " << m_line2 << "\n";
    cout << "m_collinear1 : L1^L1 : " << m_collinear1 << "\n";
    cout << "m_collinear2 : L1^L2 : " << m_collinear2 << "\n";
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    collinear1();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
