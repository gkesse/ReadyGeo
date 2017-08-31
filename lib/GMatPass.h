//===============================================
#ifndef _GMatPass_
#define _GMatPass_
//===============================================
#include "GMat.h"
//===============================================
class GMatPass {
private:
    GMatPass();
    
public:
    ~GMatPass();
    static GMatPass* Instance();

public:

private:
    static GMatPass* m_instance;
    GMat* m_mat;
};
//===============================================
#endif
//===============================================
