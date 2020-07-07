#include "mapCell.h"


mapCell::mapCell()
{
    id = 0;

    //ctor
}

bool mapCell::isBlocked()
{
    if(id == '1'){
        return true;
    } else {
        return false;
    }
}

//mapCell::~mapCell()
//{
    //dtor
//}
