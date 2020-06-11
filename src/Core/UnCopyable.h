#ifndef UNCOPYABLE
#define UNCOPYABLE
class UnCopyable{

    protected:
    UnCopyable(){}
    ~UnCopyable(){}

    private:
    UnCopyable(const UnCopyable&);
    UnCopyable& operator=(const UnCopyable);
};
#endif