//===============================================
#include "GMatPass.h"
//===============================================
GMatPass* GMatPass::m_instance = 0;
//===============================================
GMatPass::GMatPass() {
    mP = GMat(4, 4);
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
    cout << mP << "\n";
}
//===============================================
void GMatPass::identity() {
    for(int i = 0; i < mP.getRow(); i++) {
        for(int j = 0; j < mP.getCol(); j++) {
            int ij = i*mP.getCol() + j; 
            if(i == j) mP[ij] = 1;
            else mP[ij] = 0;
        }
    }
}
//===============================================
void GMatPass::translate(const GVec& vA) {
    GMat mT(4, 4);
    for(int i = 0; i < mT.getRow(); i++) {
        for(int j = 0; j < mT.getCol(); j++) {
            int ij = i*mT.getCol() + j; 
            if(i == j) mT[ij] = 1;
            else if(j == mT.getCol() - 1) {
                if(i == 0) mT[ij] = vA.getX();
                else if(i == 1) mT[ij] = vA.getY();
                else if(i == 2) mT[ij] = vA.getZ();
            }
            else mT[ij] = 0;
        }
    }
    mP = mP*mT;
}
//===============================================
void GMatPass::rotate(const GVec& vA, const double& aDeg) {
    GMat mR(4, 4);
    GVec vU = vA.normalize();
    double c = cos((aDeg*M_PI)/180);
    double s = sin((aDeg*M_PI)/180);
    int i, j, ij;
    
    i = 0; j = 0; ij = i*mR.getCol() + j; mR[ij] = vU.getX()*vU.getX()*(1 - c) + c;
    i = 0; j = 1; ij = i*mR.getCol() + j; mR[ij] = vU.getX()*vU.getY()*(1 - c) - vU.getZ()*s;
    i = 0; j = 2; ij = i*mR.getCol() + j; mR[ij] = vU.getX()*vU.getZ()*(1 - c) + vU.getY()*s;

    i = 1; j = 0; ij = i*mR.getCol() + j; mR[ij] = vU.getY()*vU.getX()*(1 - c) + vU.getZ()*s;
    i = 1; j = 1; ij = i*mR.getCol() + j; mR[ij] = vU.getY()*vU.getY()*(1 - c) + c;
    i = 1; j = 2; ij = i*mR.getCol() + j; mR[ij] = vU.getY()*vU.getZ()*(1 - c) - vU.getX()*s;

    i = 2; j = 0; ij = i*mR.getCol() + j; mR[ij] = vU.getZ()*vU.getX()*(1 - c) - vU.getY()*s;
    i = 2; j = 1; ij = i*mR.getCol() + j; mR[ij] = vU.getZ()*vU.getY()*(1 - c) + vU.getX()*s;
    i = 2; j = 2; ij = i*mR.getCol() + j; mR[ij] = vU.getZ()*vU.getZ()*(1 - c) + c;
    
    i = 3; j = 3; ij = i*mR.getCol() + j; mR[ij] = 1;

    mP = mP*mR;
}
//===============================================
