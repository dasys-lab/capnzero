#pragma once

#include <iostream>
#include <map>
template <typename x>
class Statistics {
public:
    Statistics();
    ~Statistics();
    /*
    x Onlinemean(x numbers[], x count);
    x mean(x numbers[], x count);
    x standard_dev(x numbers[], x count);
    void meanprinter(x  mEan);
    void stdvprinter(x  sTddv);
    void maxiprinter(x  mAx);
    void miniprinter(x  mIn);
    void Onlinemeanprinter(x  meAn);
    x  max(x  numbers[], int count);
    x  mini(x  numbers[], int count);*/
    double referencemean(std::map<long,double >& mYmap);
    double referencestd_dev(std::map<long,double >& mYmap);
    double rmax(std::map<long,double >& mYmap);
    double rmin(std::map<long,double >& mYmap);


};