//===============================================
#include "GSmartPtr.h"
//===============================================
void smartPointer1() {
    GSmartPtr<int> m_sPtr1;
    GSmartPtr<int> m_sPtr2(new int(2));
    int* m_get2 = m_sPtr2.get();
    int m_data2 = *m_sPtr2;
    
    cout << "m_sPtr1 : " << m_sPtr1 << "\n";
    cout << "m_sPtr2 : " << m_sPtr2 << "\n";
    cout << "m_get2 : " << *m_get2 << "\n";
    cout << "m_data2 : " << m_data2 << "\n";
    cout << "m_pData2 : " << *m_sPtr2 << "\n";
    
    m_sPtr1.reset(new int(10));
    m_sPtr2.reset(new int(20));
    
    cout << "\n";
    cout << "m_sPtr1 : " << m_sPtr1 << "\n";
    cout << "m_sPtr2 : " << m_sPtr2 << "\n";    
    
    {
        GSmartPtr<int> m_aPtr1 = m_sPtr1;
        GSmartPtr<int> m_aPtr2 = m_sPtr2;
            
        cout << "\n";
        cout << "m_aPtr1 : " << m_aPtr1 << "\n";
        cout << "m_aPtr2 : " << m_aPtr2 << "\n";    
        
        GSmartPtr<int> m_bPtr1;
        GSmartPtr<int> m_bPtr2;
        
        m_bPtr1 = m_aPtr1;
        m_bPtr2 = m_aPtr2;
    
        cout << "\n";
        cout << "m_bPtr1 : " << m_bPtr1 << "\n";
        cout << "m_bPtr2 : " << m_bPtr2 << "\n";    
    }
    
    cout << "\n";
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    smartPointer1();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
