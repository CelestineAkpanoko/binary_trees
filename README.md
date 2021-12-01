 # 0x1D. C - Binary trees
 
 This repo contains tasks for learning about the implementation of *Binary Trees* as well as the allowed operations with a focus on completing the tasks in __C__.

## Tasks Completed

+ [x] 0\. 0-binary_tree_node.c: Write a function that creates a binary tree node <br/>_**[0-binary_tree_node.c](0-binary_tree_node.c)**_ Requirements:
  + Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
  + Where `parent` is a pointer to the parent node of the node to create.
  + And `value` is the value to put in the new node
  + When created, a node does not have any child
  + Your function must return a pointer to the new node, or `NULL` on failure

+ [x] 1\. 1-binary_tree_insert_left.c: Write a function that creates a binary tree node <br/>_**[1-binary_tree_insert_left.c](0-binary_tree_node.c)**_ Requirements:
  + Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
  + Where `parent` is a pointer to the node to insert the left-child in
  + And `value` is the value to put in the new node
  + When created, a node does not have any child
  + Your function must return a pointer to the created node, or `NULL` on failure or if parent is `NULL`
