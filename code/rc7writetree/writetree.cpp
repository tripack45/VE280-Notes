std::ostream&
operator<<(std::ostream &stream, const tree_t &tree) {
    if (tree_isEmpty(tree)) {
        stream << "$ ";
        return stream; }
    stream << "[ " << tree_elt(tree) << " ";
    stream << tree_left(tree) << "";
    stream << tree_right(tree) << "] ";
    return stream; }
