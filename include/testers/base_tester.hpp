#ifndef BASE_TESTER_HPP
#define BASE_TESTER_HPP

class BaseTester {
public:
    virtual ~BaseTester() = default;
    virtual bool selectStrategy() = 0;
    virtual void run() = 0;
    virtual void runAll() = 0;
};

#endif
