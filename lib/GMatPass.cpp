//===============================================
#include "GMatPass.h"
//===============================================
GMatPass* GMatPass::m_instance = 0;
//===============================================
GMatPass::GMatPass() {
    m_mat = new GMat(4,4);
}
//===============================================
GMatPass::~GMatPass() {

}
//===============================================
GMatPass* GMatPass::Instance() {
    if(m_instance == 0) {
        m_instance = new GMatPass;
    }
    return m_instance;
}
//===============================================
void GMatPass::show() const {
    cout << *m_mat << "\n";
}
//===============================================
void GMatPass::identity() {
    for(int i = 0; i < m_mat->getRow(); i++) {
        for(int j = 0; j < m_mat->getCol(); j++) {
            int k = i*m_mat->getCol() + j; 
            if(i == j) (*m_mat)[k] = 1;
            else (*m_mat)[k] = 0;
        }
    }
}
//===============================================
