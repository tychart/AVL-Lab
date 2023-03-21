#include <iostream>

#include "AVL.h"
#include "printing.h"

void test1() {
    std::cout << "--- Test 1 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 1 into the tree..." << std::boolalpha << tree.insert(1) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 2 into the tree..." << std::boolalpha << tree.insert(2) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

void test2() {
    std::cout << "--- Test 2 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 2 into the tree..." << std::boolalpha << tree.insert(2) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 1 into the tree..." << std::boolalpha << tree.insert(1) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

void test3() {
    std::cout << "--- Test 3 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 4 into the tree..." << std::boolalpha << tree.insert(4) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 5 into the tree..." << std::boolalpha << tree.insert(5) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 2 into the tree..." << std::boolalpha << tree.insert(2) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 1 into the tree..." << std::boolalpha << tree.insert(1) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

void test4() {
    std::cout << "--- Test 4 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 4 into the tree..." << std::boolalpha << tree.insert(4) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 5 into the tree..." << std::boolalpha << tree.insert(5) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 1 into the tree..." << std::boolalpha << tree.insert(1) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 2 into the tree..." << std::boolalpha << tree.insert(2) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

void test5() {
    std::cout << "--- Test 5 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 2 into the tree..." << std::boolalpha << tree.insert(2) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 1 into the tree..." << std::boolalpha << tree.insert(1) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 4 into the tree..." << std::boolalpha << tree.insert(4) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 5 into the tree..." << std::boolalpha << tree.insert(5) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

void test6() {
    std::cout << "--- Test 6 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 2 into the tree..." << std::boolalpha << tree.insert(2) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 1 into the tree..." << std::boolalpha << tree.insert(1) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 5 into the tree..." << std::boolalpha << tree.insert(5) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 4 into the tree..." << std::boolalpha << tree.insert(4) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

void test7() {
    std::cout << "--- Test 7 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 4 into the tree..." << std::boolalpha << tree.insert(4) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 2 into the tree..." << std::boolalpha << tree.insert(2) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 8 into the tree..." << std::boolalpha << tree.insert(8) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 1 into the tree..." << std::boolalpha << tree.insert(1) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 6 into the tree..." << std::boolalpha << tree.insert(6) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 10 into the tree..." << std::boolalpha << tree.insert(10) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 5 into the tree..." << std::boolalpha << tree.insert(5) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 7 into the tree..." << std::boolalpha << tree.insert(7) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 10 into the tree..." << std::boolalpha << tree.insert(10) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 9 into the tree..." << std::boolalpha << tree.insert(9) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 11 into the tree..." << std::boolalpha << tree.insert(11) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 12 into the tree..." << std::boolalpha << tree.insert(12) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

void test8() {
    std::cout << "--- Test 8 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 4 into the tree..." << std::boolalpha << tree.insert(4) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 2 into the tree..." << std::boolalpha << tree.insert(2) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 9 into the tree..." << std::boolalpha << tree.insert(9) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 1 into the tree..." << std::boolalpha << tree.insert(1) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 6 into the tree..." << std::boolalpha << tree.insert(6) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 11 into the tree..." << std::boolalpha << tree.insert(11) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 5 into the tree..." << std::boolalpha << tree.insert(5) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 7 into the tree..." << std::boolalpha << tree.insert(7) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 10 into the tree..." << std::boolalpha << tree.insert(10) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 12 into the tree..." << std::boolalpha << tree.insert(12) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 11 into the tree..." << std::boolalpha << tree.insert(11) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 8 into the tree..." << std::boolalpha << tree.insert(8) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

void test9() {
    std::cout << "--- Test 9 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 9 into the tree..." << std::boolalpha << tree.insert(9) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 5 into the tree..." << std::boolalpha << tree.insert(5) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 11 into the tree..." << std::boolalpha << tree.insert(11) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 7 into the tree..." << std::boolalpha << tree.insert(7) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 10 into the tree..." << std::boolalpha << tree.insert(10) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 12 into the tree..." << std::boolalpha << tree.insert(12) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 2 into the tree..." << std::boolalpha << tree.insert(2) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 4 into the tree..." << std::boolalpha << tree.insert(4) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 7 into the tree..." << std::boolalpha << tree.insert(7) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 6 into the tree..." << std::boolalpha << tree.insert(6) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 8 into the tree..." << std::boolalpha << tree.insert(8) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 1 into the tree..." << std::boolalpha << tree.insert(1) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

void test10() {
    std::cout << "--- Test 10 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 9 into the tree..." << std::boolalpha << tree.insert(9) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 4 into the tree..." << std::boolalpha << tree.insert(4) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 11 into the tree..." << std::boolalpha << tree.insert(11) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 2 into the tree..." << std::boolalpha << tree.insert(2) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 7 into the tree..." << std::boolalpha << tree.insert(7) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 4 into the tree..." << std::boolalpha << tree.insert(4) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 10 into the tree..." << std::boolalpha << tree.insert(10) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 12 into the tree..." << std::boolalpha << tree.insert(12) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 1 into the tree..." << std::boolalpha << tree.insert(1) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 5 into the tree..." << std::boolalpha << tree.insert(5) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 8 into the tree..." << std::boolalpha << tree.insert(8) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to insert 6 into the tree..." << std::boolalpha << tree.insert(6) << std::endl;
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

void test11() {
    std::cout << "--- Test 11 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nInserting 8, 4, 12, 2, 6, 10, 14, 1, 3, 5,\n          9, 11, 13, and 15 into the tree..."
              << std::endl;
    tree.insert(8);
    tree.insert(4);
    tree.insert(12);
    tree.insert(2);
    tree.insert(6);
    tree.insert(10);
    tree.insert(14);
    tree.insert(1);
    tree.insert(3);
    tree.insert(5);
    tree.insert(9);
    tree.insert(11);
    tree.insert(13);
    tree.insert(15);

    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\ntree.contains(14) = " << std::boolalpha << tree.contains(14) << std::endl;
    std::cout << "tree.contains(4) = " << std::boolalpha << tree.contains(4) << std::endl;
    std::cout << "tree.contains(5) = " << std::boolalpha << tree.contains(5) << std::endl;
    std::cout << "tree.contains(15) = " << std::boolalpha << tree.contains(15) << std::endl;
    std::cout << "tree.contains(7) = " << std::boolalpha << tree.contains(7) << std::endl;
    std::cout << "tree.contains(2) = " << std::boolalpha << tree.contains(2) << std::endl;
    std::cout << "tree.contains(-3) = " << std::boolalpha << tree.contains(-3) << std::endl;
    std::cout << "tree.contains(17) = " << std::boolalpha << tree.contains(17) << std::endl;
    std::cout << "tree.contains(35) = " << std::boolalpha << tree.contains(35) << std::endl;
}

void test12() {
    std::cout << "--- Test 12 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "Inserting 6, 4, 7, 2, 5, 9, 1, and 3 into the tree..." << std::endl;
    tree.insert(6);
    tree.insert(4);
    tree.insert(7);
    tree.insert(2);
    tree.insert(5);
    tree.insert(9);
    tree.insert(1);
    tree.insert(3);

    std::cout << "Pretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 9 from the tree..." << std::boolalpha << tree.remove(9) << std::endl;
    std::cout << "Pretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nChecking that 4 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 4)
              << std::endl;
    std::cout << "Attempting to remove 4 from the tree..." << std::boolalpha << tree.remove(4) << std::endl;

    std::cout << "\nChecking that 3 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 3)
              << std::endl;
    std::cout << "Attempting to remove 3 from the tree..." << std::boolalpha << tree.remove(3) << std::endl;

    std::cout << "\nChecking that 2 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 2)
              << std::endl;
    std::cout << "Attempting to remove 2 from the tree..." << std::boolalpha << tree.remove(2) << std::endl;

    std::cout << "\nAttempting to remove 4 from the tree..." << std::boolalpha << tree.remove(4) << std::endl;

    std::cout << "\nChecking that 6 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 6)
              << std::endl;
    std::cout << "Attempting to remove 6 from the tree..." << std::boolalpha << tree.remove(6) << std::endl;

    std::cout << "\nChecking that 5 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 5)
              << std::endl;
    std::cout << "Attempting to remove 5 from the tree..." << std::boolalpha << tree.remove(5) << std::endl;

    std::cout << "\nChecking that 1 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 1)
              << std::endl;
    std::cout << "Attempting to remove 1 from the tree..." << std::boolalpha << tree.remove(1) << std::endl;

    std::cout << "\nChecking that 7 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 7)
              << std::endl;
    std::cout << "Attempting to remove 7 from the tree..." << std::boolalpha << tree.remove(7) << std::endl;

    std::cout << "\nPretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);
}

void test13() {
    std::cout << "--- Test 13 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "Inserting 6, 2, 7, 1, 4, 9, 3, and 5 into the tree..." << std::endl;
    tree.insert(6);
    tree.insert(2);
    tree.insert(7);
    tree.insert(1);
    tree.insert(4);
    tree.insert(9);
    tree.insert(3);
    tree.insert(5);

    std::cout << "Pretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 9 from the tree..." << std::boolalpha << tree.remove(9) << std::endl;
    std::cout << "Pretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nChecking that 4 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 4)
              << std::endl;
    std::cout << "Attempting to remove 4 from the tree..." << std::boolalpha << tree.remove(4) << std::endl;

    std::cout << "\nChecking that 3 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 3)
              << std::endl;
    std::cout << "Attempting to remove 3 from the tree..." << std::boolalpha << tree.remove(3) << std::endl;

    std::cout << "\nChecking that 2 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 2)
              << std::endl;
    std::cout << "Attempting to remove 2 from the tree..." << std::boolalpha << tree.remove(2) << std::endl;

    std::cout << "\nChecking that 6 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 6)
              << std::endl;
    std::cout << "Attempting to remove 6 from the tree..." << std::boolalpha << tree.remove(6) << std::endl;

    std::cout << "\nChecking that 5 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 5)
              << std::endl;
    std::cout << "Attempting to remove 5 from the tree..." << std::boolalpha << tree.remove(5) << std::endl;

    std::cout << "\nChecking that 1 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 1)
              << std::endl;
    std::cout << "Attempting to remove 1 from the tree..." << std::boolalpha << tree.remove(1) << std::endl;

    std::cout << "\nAttempting to remove 6 from the tree..." << std::boolalpha << tree.remove(6) << std::endl;

    std::cout << "\nChecking that 7 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 7)
              << std::endl;
    std::cout << "Attempting to remove 7 from the tree..." << std::boolalpha << tree.remove(7) << std::endl;

    std::cout << "\nPretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);
}

void test14() {
    std::cout << "--- Test 14 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "Inserting 4, 3, 8, 2, 6, 9, 5, and 7 into the tree..." << std::endl;
    tree.insert(4);
    tree.insert(3);
    tree.insert(8);
    tree.insert(2);
    tree.insert(6);
    tree.insert(9);
    tree.insert(5);
    tree.insert(7);

    std::cout << "Pretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 2 from the tree..." << std::boolalpha << tree.remove(2) << std::endl;
    std::cout << "Pretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nChecking that 6 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 6)
              << std::endl;
    std::cout << "Attempting to remove 6 from the tree..." << std::boolalpha << tree.remove(6) << std::endl;

    std::cout << "\nAttempting to remove 2 from the tree..." << std::boolalpha << tree.remove(2) << std::endl;

    std::cout << "\nChecking that 5 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 5)
              << std::endl;
    std::cout << "Attempting to remove 5 from the tree..." << std::boolalpha << tree.remove(5) << std::endl;

    std::cout << "\nChecking that 4 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 4)
              << std::endl;
    std::cout << "Attempting to remove 4 from the tree..." << std::boolalpha << tree.remove(4) << std::endl;

    std::cout << "\nChecking that 8 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 8)
              << std::endl;
    std::cout << "Attempting to remove 8 from the tree..." << std::boolalpha << tree.remove(8) << std::endl;

    std::cout << "\nChecking that 7 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 7)
              << std::endl;
    std::cout << "Attempting to remove 7 from the tree..." << std::boolalpha << tree.remove(7) << std::endl;

    std::cout << "\nChecking that 3 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 3)
              << std::endl;
    std::cout << "Attempting to remove 3 from the tree..." << std::boolalpha << tree.remove(3) << std::endl;

    std::cout << "\nChecking that 9 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 9)
              << std::endl;
    std::cout << "Attempting to remove 9 from the tree..." << std::boolalpha << tree.remove(9) << std::endl;

    std::cout << "\nPretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);
}

void test15() {
    std::cout << "--- Test 15 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "Inserting 4, 3, 6, 2, 5, 8, 7, and 9 into the tree..." << std::endl;
    tree.insert(4);
    tree.insert(3);
    tree.insert(6);
    tree.insert(2);
    tree.insert(5);
    tree.insert(8);
    tree.insert(7);
    tree.insert(9);

    std::cout << "Pretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 2 from the tree..." << std::boolalpha << tree.remove(2) << std::endl;
    std::cout << "Pretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nChecking that 6 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 6)
              << std::endl;
    std::cout << "Attempting to remove 6 from the tree..." << std::boolalpha << tree.remove(6) << std::endl;

    std::cout << "\nChecking that 5 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 5)
              << std::endl;
    std::cout << "Attempting to remove 5 from the tree..." << std::boolalpha << tree.remove(5) << std::endl;

    std::cout << "\nChecking that 4 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 4)
              << std::endl;
    std::cout << "Attempting to remove 4 from the tree..." << std::boolalpha << tree.remove(4) << std::endl;

    std::cout << "\nChecking that 8 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 8)
              << std::endl;
    std::cout << "Attempting to remove 8 from the tree..." << std::boolalpha << tree.remove(8) << std::endl;

    std::cout << "\nChecking that 7 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 7)
              << std::endl;
    std::cout << "Attempting to remove 7 from the tree..." << std::boolalpha << tree.remove(7) << std::endl;

    std::cout << "\nChecking that 3 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 3)
              << std::endl;
    std::cout << "Attempting to remove 3 from the tree..." << std::boolalpha << tree.remove(3) << std::endl;

    std::cout << "\nAttempting to remove 5 from the tree..." << std::boolalpha << tree.remove(5) << std::endl;

    std::cout << "\nChecking that 9 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 9)
              << std::endl;
    std::cout << "Attempting to remove 9 from the tree..." << std::boolalpha << tree.remove(9) << std::endl;

    std::cout << "\nPretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);
}

void test16() {
    std::cout << "--- Test 16 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree..." << std::endl;
    pretty_print_tree(tree);

    std::cout << "Inserting 10, 6, 14, 4, 8, 12, 16, 2, 5, 7, 11, 13, 15, 17, 1, and 3 into the tree..." << std::endl;
    tree.insert(10);
    tree.insert(6);
    tree.insert(14);
    tree.insert(4);
    tree.insert(8);
    tree.insert(12);
    tree.insert(16);
    tree.insert(2);
    tree.insert(5);
    tree.insert(7);
    tree.insert(11);
    tree.insert(13);
    tree.insert(15);
    tree.insert(17);
    tree.insert(1);
    tree.insert(3);

    std::cout << "Pretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nAttempting to remove 10 from the tree..." << std::boolalpha << tree.remove(10) << std::endl;
    std::cout << "Pretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nChecking that 8 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 8)
              << std::endl;
    std::cout << "Attempting to remove 8 from the tree..." << std::boolalpha << tree.remove(8) << std::endl;

    std::cout << "\nChecking that 7 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 7)
              << std::endl;
    std::cout << "Attempting to remove 7 from the tree..." << std::boolalpha << tree.remove(7) << std::endl;

    std::cout << "\nChecking that 6 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 6)
              << std::endl;
    std::cout << "Attempting to remove 6 from the tree..." << std::boolalpha << tree.remove(6) << std::endl;

    std::cout << "\nChecking that 5 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 5)
              << std::endl;
    std::cout << "Attempting to remove 5 from the tree..." << std::boolalpha << tree.remove(5) << std::endl;

    std::cout << "\nChecking that 4 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 4)
              << std::endl;
    std::cout << "Attempting to remove 4 from the tree..." << std::boolalpha << tree.remove(4) << std::endl;

    std::cout << "\nChecking that 3 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 3)
              << std::endl;
    std::cout << "Attempting to remove 3 from the tree..." << std::boolalpha << tree.remove(3) << std::endl;

    std::cout << "\nChecking that 14 is at the head of the tree..." << std::boolalpha
              << (tree.getRootNode()->data == 14) << std::endl;
    std::cout << "Attempting to remove 14 from the tree..." << std::boolalpha << tree.remove(14) << std::endl;

    std::cout << "\nChecking that 13 is at the head of the tree..." << std::boolalpha
              << (tree.getRootNode()->data == 13) << std::endl;
    std::cout << "Attempting to remove 13 from the tree..." << std::boolalpha << tree.remove(13) << std::endl;

    std::cout << "\nChecking that 12 is at the head of the tree..." << std::boolalpha
              << (tree.getRootNode()->data == 12) << std::endl;
    std::cout << "Attempting to remove 12 from the tree..." << std::boolalpha << tree.remove(12) << std::endl;

    std::cout << "\nChecking that 11 is at the head of the tree..." << std::boolalpha
              << (tree.getRootNode()->data == 11) << std::endl;
    std::cout << "Attempting to remove 11 from the tree..." << std::boolalpha << tree.remove(11) << std::endl;

    std::cout << "\nChecking that 2 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 2)
              << std::endl;
    std::cout << "Attempting to remove 2 from the tree..." << std::boolalpha << tree.remove(2) << std::endl;

    std::cout << "\nAttempting to remove 13 from the tree..." << std::boolalpha << tree.remove(13) << std::endl;

    std::cout << "\nChecking that 16 is at the head of the tree..." << std::boolalpha
              << (tree.getRootNode()->data == 16) << std::endl;
    std::cout << "Attempting to remove 16 from the tree..." << std::boolalpha << tree.remove(16) << std::endl;

    std::cout << "\nChecking that 15 is at the head of the tree..." << std::boolalpha
              << (tree.getRootNode()->data == 15) << std::endl;
    std::cout << "Attempting to remove 15 from the tree..." << std::boolalpha << tree.remove(15) << std::endl;

    std::cout << "\nAttempting to remove 3 from the tree..." << std::boolalpha << tree.remove(3) << std::endl;

    std::cout << "\nChecking that 1 is at the head of the tree..." << std::boolalpha << (tree.getRootNode()->data == 1)
              << std::endl;
    std::cout << "Attempting to remove 1 from the tree..." << std::boolalpha << tree.remove(1) << std::endl;

    std::cout << "\nChecking that 17 is at the head of the tree..." << std::boolalpha
              << (tree.getRootNode()->data == 17) << std::endl;
    std::cout << "Attempting to remove 17 from the tree..." << std::boolalpha << tree.remove(17) << std::endl;

    std::cout << "\nPretty printing the tree..." << std::endl << std::endl;
    pretty_print_tree(tree);
}

void test17() {
    std::cout << "--- Test 17 output ---" << std::endl;

    AVL tree;

    std::cout << "\ntree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 1 into the tree..." << std::boolalpha << tree.insert(1) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 2 into the tree..." << std::boolalpha << tree.insert(2) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 4 into the tree..." << std::boolalpha << tree.insert(4) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 5 into the tree..." << std::boolalpha << tree.insert(5) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 6 into the tree..." << std::boolalpha << tree.insert(6) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 7 into the tree..." << std::boolalpha << tree.insert(7) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 3 into the tree..." << std::boolalpha << tree.insert(3) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 8 into the tree..." << std::boolalpha << tree.insert(8) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 9 into the tree..." << std::boolalpha << tree.insert(9) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 5 into the tree..." << std::boolalpha << tree.insert(5) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 10 into the tree..." << std::boolalpha << tree.insert(10) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 8 into the tree..." << std::boolalpha << tree.insert(8) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to insert 10 into the tree..." << std::boolalpha << tree.insert(10) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to remove 4 from the tree..." << std::boolalpha << tree.remove(4) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to remove 7 from the tree..." << std::boolalpha << tree.remove(7) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to remove 9 from the tree..." << std::boolalpha << tree.remove(9) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to remove 4 from the tree..." << std::boolalpha << tree.remove(4) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to remove 10 from the tree..." << std::boolalpha << tree.remove(10) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nAttempting to remove 9 from the tree..." << std::boolalpha << tree.remove(9) << std::endl;
    std::cout << "tree.size() = " << tree.size() << std::endl;

    std::cout << "\nClearing the tree..." << std::endl;
    tree.clear();
    std::cout << "tree.size() = " << tree.size() << std::endl;
}

void test18() {
    std::cout << "--- Test 18 output ---" << std::endl;

    AVL tree;

    std::cout << "\nPretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nInserting 1, 2, and 3 into the tree..." << std::endl;
    tree.insert(1);
    tree.insert(2);
    tree.insert(3);

    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);

    std::cout << "\nClearing the tree..." << std::endl;
    tree.clear();

    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " [TEST]" << std::endl;
        std::cerr << "where TEST is in the range of 1-18 or all" << std::endl;
        return 1;
    }

    std::string test = argv[1];

    if (test == "1") {
        test1();
    } else if (test == "2") {
        test2();
    } else if (test == "3") {
        test3();
    } else if (test == "4") {
        test4();
    } else if (test == "5") {
        test5();
    } else if (test == "6") {
        test6();
    } else if (test == "7") {
        test7();
    } else if (test == "8") {
        test8();
    } else if (test == "9") {
        test9();
    } else if (test == "10") {
        test10();
    } else if (test == "11") {
        test11();
    } else if (test == "12") {
        test12();
    } else if (test == "13") {
        test13();
    } else if (test == "14") {
        test14();
    } else if (test == "15") {
        test15();
    } else if (test == "16") {
        test16();
    } else if (test == "17") {
        test17();
    } else if (test == "18") {
        test18();
    } else if (test == "all") {
        test1();

        std::cout << "\n\n";
        test2();

        std::cout << "\n\n";
        test3();

        std::cout << "\n\n";
        test4();

        std::cout << "\n\n";
        test5();

        std::cout << "\n\n";
        test6();

        std::cout << "\n\n";
        test7();

        std::cout << "\n\n";
        test8();

        std::cout << "\n\n";
        test9();

        std::cout << "\n\n";
        test10();

        std::cout << "\n\n";
        test11();

        std::cout << "\n\n";
        test12();

        std::cout << "\n\n";
        test13();

        std::cout << "\n\n";
        test14();

        std::cout << "\n\n";
        test15();

        std::cout << "\n\n";
        test16();

        std::cout << "\n\n";
        test17();

        std::cout << "\n\n";
        test18();
    } else {
        std::cerr << test << " is not a valid test to run. The valid options are any number in the range 1-18 and all"
                  << std::endl;
        return 1;
    }

    return 0;
}
