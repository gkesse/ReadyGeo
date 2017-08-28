//===============================================
#include "GLine.h"
//===============================================
void line1() {    
    GLine m_line1;
    GLine m_line2(3, 4, 5);
    GLine m_line3 = m_line2;;
    GLine m_line4(-3, 1, 1, -2);
    GPoint m_pt1(-3, 1);
    GPoint m_pt2(1, -2);
    GLine m_line5(m_pt1, m_pt2);   
    
    cout << "m_line1 : " << m_line1 << "\n";
    cout << "m_line2 : " << m_line2 << "\n";
    cout << "m_line3 : " << m_line3 << "\n";
    cout << "m_line4 : " << m_line4 << "\n";
    cout << "m_line5 : " << m_line5 << "\n";
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    line1();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
