#include "bst.h"

// ---------------------------------------
// Node class
// Default constructor
Node::Node() {
// TODO: Implement this
}
// Constructor
Node::Node(int in) {
// TODO: Implement this
}
// Destructor
Node::~Node() {
// TODO: Implement this
}

// Add parent 
void Node::add_parent(Node* in) {
// TODO: Implement this
}
// Add to left of current node
void Node::add_left(Node* in) {
// TODO: Implement this
}
// Add to right of current node
void Node::add_right(Node* in) {
// TODO: Implement this
}

// Get key
int Node::get_key()
{
// TODO: Implement this
}
// Get parent node
Node* Node::get_parent()
{
// TODO: Implement this
}
// Get left node
Node* Node::get_left()
{
// TODO: Implement this
}
// Get right node
Node* Node::get_right()
{
// TODO: Implement this
}
// Print the key to ostream to
// Do not change this
void Node::print_info(ostream& to)
{
    to << key << endl;
}
// ---------------------------------------


// ---------------------------------------
// BST class
// Walk the subtree from the given node
void BST::inorder_walk(Node* in, ostream& to)
{
// TODO: Implement this
}
// Constructor
BST::BST()
{
// TODO: Implement this
}
// Destructor
BST::~BST()
{
// TODO: Implement this
}
// Insert a node to the subtree
void BST::insert_node(Node* in)
{
// TODO: Implement this
}
// Delete a node to the subtree
void BST::delete_node(Node* out)
{
// TODO: Implement this
}
// minimum key in the BST
Node* BST::tree_min()
{
// TODO: Implement this
}
// maximum key in the BST
Node* BST::tree_max()
{
// TODO: Implement this
}
// Get the minimum node from the subtree of given node
Node* BST::get_min(Node* in)
{
// TODO: Implement this
}
// Get the maximum node from the subtree of given node
Node* BST::get_max(Node* in)
{
// TODO: Implement this
}
// Get successor of the given node
Node* BST::get_succ(Node* in)
{
// TODO: Implement this
}
// Get predecessor of the given node
Node* BST::get_pred(Node* in)
{
// TODO: Implement this
}
// Walk the BST from min to max
void BST::walk(ostream& to)
{
// TODO: Implement this
}
// Search the tree for a given key
Node* BST::tree_search(int search_key)
{
// TODO: Implement this
}
// ---------------------------------------
