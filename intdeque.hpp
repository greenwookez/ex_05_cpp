class IntDequeElement {
    int element;
    IntDequeElement* next;
    IntDequeElement* prev;
    int index; // added in case IntArray
    
    public:
    IntDequeElement();
    IntDequeElement(int _element);
    IntDequeElement(int _element, IntDequeElement * _prev, IntDequeElement * _next);

    void SetElement(int _element);
    int GetElement();

    void SetNext(IntDequeElement * _next);
    IntDequeElement * GetNext();
    
    void SetPrev(IntDequeElement * _prev);
    IntDequeElement * GetPrev();
    
    int GetIndex() { return index; }; // q1: is it possible?
    void SetIndex(int _index) { index = _index; };
};

class IntDeque {
    private:
    IntDequeElement * left;
    IntDequeElement * right;

    protected:
    int buffer;
    IntDequeElement * GetLeft() { return left; }; // Надеюсь, в заголовочном файле допустимо реализовать "getter"...
    IntDequeElement * GetRight() { return right; };
    void SetLeft(IntDequeElement *pElem) { left = pElem; };
    void SetRight(IntDequeElement *pElem) { right = pElem; };

    public:
    IntDeque();
    IntDeque(IntDeque & _deque);

    virtual int * AddLeft(int element);
    virtual int * AddRight(int element);
    int * RemoveLeft();
    int * RemoveRight();
    int GetElement();
    int IsEmpty();

    /* Overloaded Operators */
    
    int* operator -- ();
    int* operator -- (int nothing);

    IntDeque & operator =(IntDeque & _deque); // overloading operator =
    int operator ==(IntDeque & _deque); // overloading operator ==

    /* End of Overloaded Operators */
    ~IntDeque();
};
    int* operator +(IntDeque & _deque, int _element); // overloading operator deque + int
    int* operator +(int _element, IntDeque & _deque); // overloading operator int + deque

