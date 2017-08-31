//===============================================
#include "GMat.h"
#include "GSmartPtr.h"
//===============================================
void matrix1() {
    double m_data1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    
    GSmartPtr<GMat> m_mat1;
    GSmartPtr<GMat> m_mat2(new GMat(3, 3));
    GSmartPtr<GMat> m_mat3(new GMat(3, 3, 10));
    GSmartPtr<GMat> m_mat4(new GMat(3, 3, m_data1));
        
    cout << "m_mat1 : \n" << m_mat1 << "\n";
    cout << "m_mat2 : \n" << m_mat2 << "\n";
    cout << "m_mat3 : \n" << m_mat3 << "\n";
    cout << "m_mat4 : \n" << m_mat4 << "\n";
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    matrix1();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
