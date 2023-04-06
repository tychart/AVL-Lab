//
// Created by tychart on 3/23/23.
//

#pragma once

#include "PrintStuff.h"
#include "AVLInterface.h"
#include "Node.h"

class AVL : public AVLInterface {

    Node* rootNode;
    int currSize = 0;

    int abs(int inNum);

    int max(int inputVar1, int inputVar2);

    bool _insert(int data, Node* currNode);

    bool _search(int data, Node* currNode) const;

    bool _remove(int data, Node* &currNode);

    bool _isLeaf(Node* currNode);

    int _getLargestValueInTree(Node* currNode);

    void _rebalance(Node* currNode);

    void _rotateRight(Node* currNode);

    void _rotateLeft(Node* currNode);

    int _getBalance(Node* currNode);

    void _updateHeight(Node* currNode);



    void _clear(Node* &currNode);

public:
    AVL();
//    AVL(Node rootNode);

    ~AVL();

    Node* getRootNode() const;

    bool insert(int data);

    bool remove(int data);

    bool contains(int data) const;

    int size() const;

    void clear();


};
