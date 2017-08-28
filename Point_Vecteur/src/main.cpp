//===============================================
#include "GPoint.h"
//===============================================
void point1() {
    GPoint m_pt1(2, 4);
    GPoint m_pt2(5, 8);
    GVec m_vec = m_pt1.vec(m_pt2);
    
    cout << "m_pt1 : " << m_pt1 << "\n";
    cout << "m_pt2 : " << m_pt2 << "\n";
    cout << "m_vec : " << m_vec << "\n";
}
//===============================================
void point2() {
    GPoint m_pt1(2, 4, -1);
    GPoint m_pt2(5, 8, 4);
    GVec m_vec = m_pt1.vec(m_pt2);
    
    cout << "m_pt1 : " << m_pt1 << "\n";
    cout << "m_pt2 : " << m_pt2 << "\n";
    cout << "m_vec : " << m_vec << "\n";
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    point1();
    cout << "-------------------------------------------------\n";
    point2();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================