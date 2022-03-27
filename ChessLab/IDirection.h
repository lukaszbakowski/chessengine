#pragma once


class IDirection
{
protected:
public:
    virtual ~IDirection() {};
    virtual void Add(IDirection direction) = 0;
    virtual bool IsPossible(int x, int y) = 0;
};

