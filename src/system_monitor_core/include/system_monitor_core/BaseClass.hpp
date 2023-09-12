
// absract classes
#ifndef BASECLASS_H
#define BASECLASS_H

template <typename T>
class BaseClass
{

public:
    T base_data;

    virtual T reader(std::string name) = 0;

    virtual ~BaseClass() {}
};

#endif
