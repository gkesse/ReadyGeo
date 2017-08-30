//===============================================
#ifndef _GPoint_
#define _GPoint_
//===============================================
#include "GVec.h"
//===============================================
class GPoint {
public:
public:
    GPoint(const bool& is3D = false);
    GPoint(const GPoint& pt);
    GPoint(const double& x, const double& y);
    GPoint(const double& x, const double& y, const double& z);
    ~GPoint();

public:
    double getX() const;
    double getY() const;
    double getZ() const;
    void setX(const double& x);
    void setY(const double& y);
    void setZ(const double& z);

public:
    double dist(const GPoint& pt) const;
    GVec vec(const GPoint& pt) const;
    GPoint rotate(const GVec& vec, const double&) const;

public:
    friend ostream& operator<<(ostream& s, const GPoint& pt); 
    friend GPoint operator+(const GPoint& pt, const GVec& vec); 
    friend GPoint operator-(const GPoint& pt, const GVec& vec); 
    
private:
    double m_x;
    double m_y;
    double m_z;
    bool m_is3D;
};
//===============================================
#endif
//===============================================
