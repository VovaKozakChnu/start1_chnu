#ifndef IPRINTABLE_H
#define IPRINTABLE_H

class IPrintable {
public:
    virtual ~IPrintable() = default;
    virtual void printInfo() const = 0;
};

#endif
