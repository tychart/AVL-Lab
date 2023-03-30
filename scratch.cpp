#include <iostream>

#include "AVL.h"
#include "printing.h"

using std::cout, std::endl;

int main(int argc, char *argv[]) {
    // Write your test code here. Remember that `printing.h` gives you access to
    // the functions `pretty_print_tree` and `ugly_print_tree`, which you can
    // use to print a representation of your tree like so:
    AVL tree;
    pretty_print_tree(tree);

    tree.insert(3);
    tree.insert(4);
    tree.insert(-6);
    tree.insert(-4);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(5);
    tree.insert(-8);
    tree.insert(-12);
    tree.insert(-7);
    pretty_print_tree(tree);
    cout << "Testing finding 7: " << tree.contains(7) << endl;
    cout << "Testing finding -7: " << tree.contains(-7) << endl;
    cout << "Testing finding 12: " << tree.contains(12) << endl;
    cout << "Testing removing -20: " << tree.remove(-20) << endl;


    pretty_print_tree(tree);
    cout << "Clearing tree!" << endl;
    tree.clear();
    pretty_print_tree(tree);

    return 0;
}
