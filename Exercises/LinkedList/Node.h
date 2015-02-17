//
//  Node.h
// This will be the .h file for the Node Object.
// Nodes will be used in the implementation for data structure exercises
//

#ifndef Node_Node_h
#define Node_Node_h

//Node will contain a pointer to the next node, and a data item
template <class ItemType>
class Node{
    private:
    
        Node<ItemType> *ptrToNext;
        ItemType data;
    
    public:
    
        Node();
        void setData(const ItemType &item);
        const ItemType getData();
        void setNext(Node<ItemType> *ptr);
        Node<ItemType>* getNext();
    
    
    
};

#endif
