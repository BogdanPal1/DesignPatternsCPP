#ifndef ISTRATEGY_H
#define ISTRATEGY_H

class IStrategy
{
public:
    IStrategy(IStrategy& other) = delete;
    IStrategy& operator=(IStrategy& other) = delete;
    IStrategy(IStrategy&& other) = delete;
    IStrategy& operator=(IStrategy&& other) = delete;
    virtual void doWork() = 0;
    virtual ~IStrategy() = 0;

protected:
    IStrategy();

};

#endif // ISTRATEGY_H