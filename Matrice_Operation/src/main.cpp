//===============================================
#include "GMat.h"
//===============================================
void matrix1() {
    double m_data1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    
    GMat A(3, 1, m_data1);
    GMat B(1, 3, m_data1);
    GMat C(3, 3, m_data1);
    GMat m_mul = A*B;
    GMat m_add = m_mul + C;
    GMat m_sub = m_mul - m_add;
    GMat m_scale = 5*C;
        
    cout << "A \n" << A << "\n";
    cout << "B \n" << B << "\n";
    cout << "C \n" << C << "\n";
    cout << "m_mul \n" << m_mul << "\n";
    cout << "m_add \n" << m_add << "\n";
    cout << "m_sub \n" << m_sub << "\n";
    cout << "m_scale \n" << m_scale << "\n";
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    matrix1();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
