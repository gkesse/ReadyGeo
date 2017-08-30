//===============================================
#include "GSmartRef.h"
//===============================================
void smartReference1() {
    GSmartRef m_sRef1;
    GSmartRef m_sRef2(2);
    GSmartRef m_sRef3(m_sRef2);
    int m_get2 = m_sRef2.get();
    
    cout << "m_sRef1 : " << m_sRef1 << "\n";
    cout << "m_sRef2 : " << m_sRef2 << "\n";
    cout << "m_sRef3 : " << m_sRef3 << "\n";
    cout << "m_get2 : " << m_get2 << "\n";
    
    m_sRef1.reset(10);
    m_sRef2.reset(20);
    
    cout << "\n";
    cout << "m_sRef1 : " << m_sRef1 << "\n";
    cout << "m_sRef2 : " << m_sRef2 << "\n";   
    
    m_sRef1.add();
    m_sRef2.add();
    
    cout << "\n";
    cout << "m_Add1 : " << m_sRef1 << "\n";
    cout << "m_Add2 : " << m_sRef2 << "\n";    

    m_sRef1.release();
    m_sRef2.release();
    
    cout << "\n";
    cout << "m_Release1 : " << m_sRef1 << "\n";
    cout << "m_Release2 : " << m_sRef2 << "\n";    
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    smartReference1();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
