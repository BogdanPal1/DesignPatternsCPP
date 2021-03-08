#ifndef STRATEGY_ONE_H
#define STRATEGY_ONE_H

#include "istrategy.h"

class StrategyOne : public IStrategy
{
public:
    virtual void doWork() override;
    virtual ~StrategyOne();

};

#endif // STRATEGY_ONE_H