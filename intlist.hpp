#include "intdeque.hpp"

class IntList : public IntDeque {
    IntDequeElement * current_elem;

    protected:
    int * AddLeft(int element);
    int * AddRight(int element);
    int countCurrentElemPosition(); // определяет номер текущего элемента по счёту начиная с 1

    public:
    IntDequeElement * GoToLeft();
    IntDequeElement * GoToRight();
    IntDequeElement * GoToNext();
    IntDequeElement * GoToPrev();
    int * Fetch();
    int * Store(int elem);

    IntList();
    IntList(IntList & plist);

    int * operator --();
    int * operator --(int nothing);
    IntList & operator =(IntList & _deque); // overloading operator =
    int operator ==(IntList & _deque); // overloading operator ==
};