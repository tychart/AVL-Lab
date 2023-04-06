//
// Created by tychart on 3/23/23.
//

#include "AVL.h"

AVL::AVL() {
    rootNode = nullptr;
}

// Destructor
AVL::~AVL() {
    clear();
}

int AVL::abs(int inNum) {
    if (inNum > 0) {
        return inNum;
    }
    return -inNum;
}


int AVL::max(int inputVar1, int inputVar2) {
    if (inputVar1 > inputVar2) {return inputVar1;}
    else {return inputVar2;}
}

Node* AVL::getRootNode() const {
    return rootNode;
}

bool AVL::_search(int data, Node *currNode) const {
    if(currNode == nullptr) {return false;}

    if(currNode-> data == data) {return true;}

    if(data < currNode-> data) {
        return _search(data, currNode-> left);
    } else {
        return _search(data, currNode-> right);
    }

}

bool AVL::_isLeaf(Node* currNode) {
    if(currNode->left == nullptr && currNode-> right == nullptr) {
        return true;
    } else {return false;}
}

bool AVL::insert(int data) {
    if(rootNode == nullptr) {
        rootNode = new Node(data);
        currSize++;
        return true;
    }

    bool temp = _insert(data, rootNode);
    if (temp) {currSize++;}
    return temp;
}

bool AVL::_insert(int data, Node* currNode) {

    // Warning: Value already exists, so nothing will be done.
    if(currNode-> data == data) {
        return false;
    }

    if(data < currNode-> data) {
        if(currNode-> left == nullptr) {
            currNode-> left = new Node(data);
            return true;
        }
        return _insert(data, currNode-> left);

    } else {
        if(currNode-> right == nullptr) {
            currNode-> right = new Node(data);
            return true;
        }
        return _insert(data, currNode-> right);
    }

}


bool AVL::remove(int data) {
    bool temp = _remove(data, rootNode);
    if (temp) {currSize--;}
    return temp;
}

bool AVL::_remove(int data, Node* &currNode) {
    if(currNode == nullptr) {return false;}

    // Will remove if node has no children
    if(_isLeaf(currNode)) {
        if(currNode-> data == data) {
            delete currNode;
            currNode = nullptr;
            return true;
        }
        // Warning: data to remove not found
        return false;
    }

    if (data == currNode-> data) {
        if (currNode-> left != nullptr && currNode-> right != nullptr) {
            int replaceData = _getLargestValueInTree(currNode-> left);
            currNode-> data = replaceData;
            _remove(replaceData, currNode-> left);
            return true;
        } else if (currNode-> left != nullptr && currNode-> right == nullptr) {
            Node* temp = currNode-> left;
            delete currNode;
            currNode = temp;
            return true;
        } else {
            Node* temp = currNode-> right;
            delete currNode;
            currNode = temp;
            return true;
        }
    }


    if (data < currNode-> data) {
        return _remove(data, currNode-> left);
    } else {
        return _remove(data, currNode-> right);
    }




}

int AVL::_getLargestValueInTree(Node* currNode) {
    if (currNode-> right == nullptr) {
        return currNode-> data;
    } else {
        return _getLargestValueInTree(currNode-> right);
    }
}

bool AVL::contains(int data) const {
    if(rootNode == nullptr) {return false;}

    return _search(data, rootNode);
}

int AVL::size() const {
    return currSize;
}

void AVL::_rebalance(Node* currNode) {
    if (abs(_getBalance(currNode)) >= 2) {

    }
}

int _getBalance(Node* currNode);









void AVL::_updateHeight(Node* currNode) {

    currNode-> height = 1 + max(
        (currNode-> left == nullptr) ? 0 : currNode-> left-> height,
        (currNode-> right == nullptr) ? 0 : currNode-> right-> height
    );

//    int tempLeft = 0;
//    if (currNode-> left == nullptr && currNode-> right == nullptr) {
//        currNode-> height = 1;
//    }
//    if (currNode-> left != nullptr) { _updateHeight(currNode-> left, depth + 1);}
//    if (currNode-> right != nullptr) { _updateHeight(currNode-> right, depth + 1);}

}










void AVL::clear() {
    _clear(rootNode);
}

void AVL::_clear(Node* &currNode) {
    if (currNode == nullptr) {return;}
    if (_isLeaf(currNode)) {
        delete currNode;
        currNode = nullptr;
        return;
    }
    if (currNode-> left != nullptr) {
        _clear(currNode-> left);
    }
    if (currNode-> right != nullptr) {
        _clear(currNode-> right);
    }

    delete currNode;
    currNode = nullptr;
    return;
}
