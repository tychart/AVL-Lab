#include <iostream>

#include "AVL.h"
#include "printing.h"

void pretty_print_with_header(const AVLInterface &tree) {
    std::cout << "Pretty printing the tree...\n" << std::endl;
    pretty_print_tree(tree);
}

void insert_with_message(AVLInterface &tree, int item) {
    std::cout << "\nAttempting to insert " << item << " into the tree..."
              << std::boolalpha << tree.insert(item) << std::endl;
}

void contains_with_message(const AVLInterface &tree, int item) {
    std::cout << "tree.contains(" << item << ") = " << std::boolalpha
              << tree.contains(item) << std::endl;
}

void remove_with_message(AVLInterface &tree, int item) {
    std::cout << "\nAttempting to remove " << item << " from the tree..."
              << std::boolalpha << tree.remove(item) << std::endl;
}

void check_and_remove_head_with_message(AVLInterface &tree, int head) {
    std::cout << "\nChecking that " << head << " is at the head of the tree..."
              << std::boolalpha << (tree.getRootNode()->data == head) << std::endl;
    std::cout << "Attempting to remove " << head << " from the tree..." << std::boolalpha << tree.remove(head)
              << std::endl;
}

void print_size(const AVLInterface &tree) {
    std::cout << "tree.size() = " << tree.size() << std::endl;
}

void test1() {
    std::cout << "--- Test 1 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    insert_with_message(tree, 1);
    pretty_print_with_header(tree);

    insert_with_message(tree, 2);
    pretty_print_with_header(tree);

    insert_with_message(tree, 3);
    pretty_print_with_header(tree);
}

void test2() {
    std::cout << "--- Test 2 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    insert_with_message(tree, 3);
    pretty_print_with_header(tree);

    insert_with_message(tree, 2);
    pretty_print_with_header(tree);

    insert_with_message(tree, 1);
    pretty_print_with_header(tree);
}

void test3() {
    std::cout << "--- Test 3 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "\nInserting 4, 5, 3, and 2 into the tree..." << std::endl;
    tree.insert(4);
    tree.insert(5);
    tree.insert(3);
    tree.insert(2);

    pretty_print_with_header(tree);

    insert_with_message(tree, 1);
    pretty_print_with_header(tree);
}

void test4() {
    std::cout << "--- Test 4 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "\nInserting 4, 5, 3, and 1 into the tree..." << std::endl;
    tree.insert(4);
    tree.insert(5);
    tree.insert(3);
    tree.insert(1);

    pretty_print_with_header(tree);

    insert_with_message(tree, 2);
    pretty_print_with_header(tree);
}

void test5() {
    std::cout << "--- Test 5 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "\nInserting 2, 1, 3, and 4 into the tree..." << std::endl;
    tree.insert(2);
    tree.insert(1);
    tree.insert(3);
    tree.insert(4);

    pretty_print_with_header(tree);

    insert_with_message(tree, 5);
    pretty_print_with_header(tree);
}

void test6() {
    std::cout << "--- Test 6 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "\nInserting 2, 1, 3, and 5 into the tree..." << std::endl;
    tree.insert(2);
    tree.insert(1);
    tree.insert(3);
    tree.insert(5);

    pretty_print_with_header(tree);

    insert_with_message(tree, 4);
    pretty_print_with_header(tree);
}

void test7() {
    std::cout << "--- Test 7 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "\nInserting 4, 2, 8, 1, 3, 6, 10, 5, 7, 9, and 11 into the tree..." << std::endl;
    tree.insert(4);
    tree.insert(2);
    tree.insert(8);
    tree.insert(1);
    tree.insert(3);
    tree.insert(6);
    tree.insert(10);
    tree.insert(5);
    tree.insert(7);
    tree.insert(9);
    tree.insert(11);

    pretty_print_with_header(tree);

    insert_with_message(tree, 12);
    pretty_print_with_header(tree);
}

void test8() {
    std::cout << "--- Test 8 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "\nInserting 4, 2, 9, 1, 3, 6, 11, 5, 7, 10, and 12 into the tree..." << std::endl;
    tree.insert(4);
    tree.insert(2);
    tree.insert(9);
    tree.insert(1);
    tree.insert(3);
    tree.insert(6);
    tree.insert(11);
    tree.insert(5);
    tree.insert(7);
    tree.insert(10);
    tree.insert(12);

    pretty_print_with_header(tree);

    insert_with_message(tree, 8);
    pretty_print_with_header(tree);
}

void test9() {
    std::cout << "--- Test 9 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "\nInserting 9, 5, 11, 3, 7, 10, 12, 2, 4, 6, and 8 into the tree..." << std::endl;
    tree.insert(9);
    tree.insert(5);
    tree.insert(11);
    tree.insert(3);
    tree.insert(7);
    tree.insert(10);
    tree.insert(12);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    pretty_print_with_header(tree);

    insert_with_message(tree, 1);
    pretty_print_with_header(tree);
}

void test10() {
    std::cout << "--- Test 10 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "\nInserting 9, 4, 11, 2, 7, 10, 12, 1, 3, 5, and 8 into the tree..." << std::endl;
    tree.insert(9);
    tree.insert(4);
    tree.insert(11);
    tree.insert(2);
    tree.insert(7);
    tree.insert(10);
    tree.insert(12);
    tree.insert(1);
    tree.insert(3);
    tree.insert(5);
    tree.insert(8);

    pretty_print_with_header(tree);

    insert_with_message(tree, 6);
    pretty_print_with_header(tree);
}

void test11() {
    std::cout << "--- Test 11 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

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

    pretty_print_with_header(tree);
    std::cout << std::endl;

    contains_with_message(tree, 14);
    contains_with_message(tree, 4);
    contains_with_message(tree, 5);
    contains_with_message(tree, 15);
    contains_with_message(tree, 7);
    contains_with_message(tree, 2);
    contains_with_message(tree, -3);
    contains_with_message(tree, 17);
    contains_with_message(tree, 35);
}

void test12() {
    std::cout << "--- Test 12 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "Inserting 6, 4, 7, 2, 5, 9, 1, and 3 into the tree..." << std::endl;
    tree.insert(6);
    tree.insert(4);
    tree.insert(7);
    tree.insert(2);
    tree.insert(5);
    tree.insert(9);
    tree.insert(1);
    tree.insert(3);

    pretty_print_with_header(tree);

    remove_with_message(tree, 9);
    pretty_print_with_header(tree);
}

void test13() {
    std::cout << "--- Test 13 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "Inserting 6, 2, 7, 1, 4, 9, 3, and 5 into the tree..." << std::endl;
    tree.insert(6);
    tree.insert(2);
    tree.insert(7);
    tree.insert(1);
    tree.insert(4);
    tree.insert(9);
    tree.insert(3);
    tree.insert(5);

    pretty_print_with_header(tree);

    remove_with_message(tree, 9);
    pretty_print_with_header(tree);
}

void test14() {
    std::cout << "--- Test 14 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "Inserting 4, 3, 8, 2, 6, 9, 5, and 7 into the tree..." << std::endl;
    tree.insert(4);
    tree.insert(3);
    tree.insert(8);
    tree.insert(2);
    tree.insert(6);
    tree.insert(9);
    tree.insert(5);
    tree.insert(7);

    pretty_print_with_header(tree);

    remove_with_message(tree, 2);
    pretty_print_with_header(tree);
}

void test15() {
    std::cout << "--- Test 15 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "Inserting 4, 3, 6, 2, 5, 8, 7, and 9 into the tree..." << std::endl;
    tree.insert(4);
    tree.insert(3);
    tree.insert(6);
    tree.insert(2);
    tree.insert(5);
    tree.insert(8);
    tree.insert(7);
    tree.insert(9);

    pretty_print_with_header(tree);

    remove_with_message(tree, 2);
    pretty_print_with_header(tree);
}

void test16() {
    std::cout << "--- Test 16 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

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

    pretty_print_with_header(tree);

    remove_with_message(tree, 10);
    pretty_print_with_header(tree);

    check_and_remove_head_with_message(tree, 8);
    check_and_remove_head_with_message(tree, 7);
    check_and_remove_head_with_message(tree, 6);
    check_and_remove_head_with_message(tree, 5);
    check_and_remove_head_with_message(tree, 4);
    check_and_remove_head_with_message(tree, 3);
    check_and_remove_head_with_message(tree, 14);
    check_and_remove_head_with_message(tree, 13);
    check_and_remove_head_with_message(tree, 12);
    check_and_remove_head_with_message(tree, 11);
    check_and_remove_head_with_message(tree, 2);
    remove_with_message(tree, 13);
    check_and_remove_head_with_message(tree, 16);
    check_and_remove_head_with_message(tree, 15);
    remove_with_message(tree, 3);
    check_and_remove_head_with_message(tree, 1);
    check_and_remove_head_with_message(tree, 17);

    std::cout << std::endl;
    pretty_print_with_header(tree);
}

void test17() {
    std::cout << "--- Test 17 output ---\n" << std::endl;

    AVL tree;

    print_size(tree);

    insert_with_message(tree, 1);
    print_size(tree);

    insert_with_message(tree, 2);
    print_size(tree);

    insert_with_message(tree, 3);
    print_size(tree);

    insert_with_message(tree, 4);
    print_size(tree);

    insert_with_message(tree, 5);
    print_size(tree);

    insert_with_message(tree, 6);
    print_size(tree);

    insert_with_message(tree, 7);
    print_size(tree);

    insert_with_message(tree, 3);
    print_size(tree);

    insert_with_message(tree, 8);
    print_size(tree);

    insert_with_message(tree, 9);
    print_size(tree);

    insert_with_message(tree, 5);
    print_size(tree);

    insert_with_message(tree, 10);
    print_size(tree);

    insert_with_message(tree, 8);
    print_size(tree);

    insert_with_message(tree, 10);
    print_size(tree);

    remove_with_message(tree, 4);
    print_size(tree);

    remove_with_message(tree, 7);
    print_size(tree);

    remove_with_message(tree, 9);
    print_size(tree);

    remove_with_message(tree, 4);
    print_size(tree);

    remove_with_message(tree, 10);
    print_size(tree);

    remove_with_message(tree, 9);
    print_size(tree);

    std::cout << "\nClearing the tree..." << std::endl;
    tree.clear();
    print_size(tree);
}

void test18() {
    std::cout << "--- Test 18 output ---\n" << std::endl;

    AVL tree;

    pretty_print_with_header(tree);

    std::cout << "\nInserting 1, 2, and 3 into the tree..." << std::endl;
    tree.insert(1);
    tree.insert(2);
    tree.insert(3);

    pretty_print_with_header(tree);

    std::cout << "\nClearing the tree..." << std::endl;
    tree.clear();

    pretty_print_with_header(tree);
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
