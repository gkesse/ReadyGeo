//===============================================
#include "GMatPass.h"
//===============================================
void matrix1() {
    GMatPass::Instance()->show();
    GMatPass::Instance()->identity();
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
