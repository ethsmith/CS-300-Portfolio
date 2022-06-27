void BST::inOrder(Node *node) {
    if (node == nullptr)
        return;

    inOrder(node->left);

    cout << node->course.courseNumber << ", " << node->course.name << endl;

    if (!node->course.prerequisites.empty()) {
        for (int i = 0; i < node->course.prerequisites.size(); i++) {
            cout << node->course.courseNumber << " Prerequisite: " << node->course.prerequisites[i] << endl;
        }
    }

    cout << endl;

    inOrder(node->right);
}