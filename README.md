# AVL Lab

## Purpose
This lab assignment focuses on self-balancing binary search trees.

## Background
In computer science, an AVL tree is a self-balancing binary search tree, and it was the first such data structure to be invented. In an AVL tree, the heights of the two subtrees of any node differ by at most one. Lookup, insertion, and deletion all take O(log n) time in both the average and worst cases, where n is the number of nodes in the tree prior to the operation. Insertions and deletions may require the tree to be rebalanced by one or more tree rotations.

## Requirements
You will need the files in this git repository to complete this assignment.

## Tests

See `tests.cpp` for the individual test cases.

### Tests 1-10 - Insert
* Implement the interface creating an AVL tree. Remember to rebalance when the subtree heights are off by more than 1 (i.e. the balance of a node is greater than 1 or less than -1).

### Test 11 - Contains

### Tests 12-15 - Remove
* Properly remove from the AVL tree
* Maintain balance of the tree
* Be sure to follow the conventions outlined in the Requirement Notes to keep a "properly" constructed tree

### Test 16 - Remove the Root until Empty

### Test 17 - Size

### Test 18 - Clear

## Requirement Notes
* There are multiple correct methods for rebalancing nodes in an AVL tree; each method may result in a unique tree. Some conventions will need to be used to ensure that your tree properly matches ours. When rebalancing, refer to [this simulation](https://www.cs.usfca.edu/~galles/visualization/AVLtree.html) for more detailed information on proper balancing.
* You should remove nodes from the AVL tree in the same manner used for the BST.
* Remember to disallow duplicate entries and handle the case when the element to be removed is not in the tree
* This lab is much easier to implement if you follow the algorithms presented in the course text on pages 634-642.
