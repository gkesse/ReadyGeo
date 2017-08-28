//===============================================
#include "GPoint.h"
//===============================================
void point1() {
    GPoint m_pt(3, 4);
    GVec m_vec(2, 4);
    GPoint m_trans1 = m_pt + m_vec;
    GPoint m_trans2 = m_pt - m_vec;
    
    cout << "m_pt : " << m_pt << "\n";
    cout << "m_vec : " << m_vec << "\n";
    cout << "m_trans1 : P + V : " << m_trans1 << "\n";
    cout << "m_trans2 : P - V : " << m_trans2 << "\n";
}
//===============================================
void point2() {
    GPoint m_pt(3, 4, 5);
    GVec m_vec(2, 4, -1);
    GPoint m_trans1 = m_pt + m_vec;
    GPoint m_trans2 = m_pt - m_vec;
    
    cout << "m_pt : " << m_pt << "\n";
    cout << "m_vec : " << m_vec << "\n";
    cout << "m_trans1 : P + V : " << m_trans1 << "\n";
    cout << "m_trans2 : P - V : " << m_trans2 << "\n";
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
