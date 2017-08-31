//===============================================
#include "GMatPass.h"
//===============================================
void matrix1() {
    GMatPass::Instance()->show();
    GMatPass::Instance()->identity();
    GMatPass::Instance()->show();
    GMatPass::Instance()->translate(GVec(10, 0, 0));
    GMatPass::Instance()->show();
    GMatPass::Instance()->translate(GVec(0, 10, 0));
    GMatPass::Instance()->show();
    GMatPass::Instance()->rotate(GVec(0, 1, 0), 90);
    GMatPass::Instance()->show();
}
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    matrix1();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
