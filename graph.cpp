#include "graph.cpp"

template <class V>
Tree<V> packTree(std::tuple<std::vector<V>,std::vector<std::tuple<size_t,size_t>>>){ return NULL; }

template <class V>
std::tuple<std::vector<V>,std::vector<std::tuple<size_t,size_t>>> unpackTree(Tree<V>){ return NULL; }

template <class V,E>
EdgeTree<V,E> packEdgeTree(std::tuple<std::vector<V>,std::vector<std::tuple<size_t,size_t,E>>>){ return NULL; }

template <class V,E>
std::tuple<std::vector<V>,std::vector<std::tuple<size_t,size_t,E>>> unpackEdgeTree(EdgeTree<V,E>){ return NULL; }




template <class V>
BinaryTree<V> packBinaryTree(std::tuple<std::vector<V>,std::vector<std::tuple<size_t,size_t>>>){ return NULL; }

template <class V>
std::tuple<std::vector<V>,std::vector<std::tuple<size_t,size_t>>> unpackBinaryTree(BinaryTree<V>){ return NULL; }

template <class V,E>
EdgeBinaryTree<V,E> packEdgeBinaryTree(std::tuple<std::vector<V>,std::vector<std::tuple<size_t,size_t,E>>>){ return NULL; }

template <class V,E>
std::tuple<std::vector<V>,std::vector<std::tuple<size_t,size_t,E>>> unpackEdgeBinaryTree(EdgeBinaryTree<V,E>){ return NULL; }




template <class V>
Graph<V> packGraph(std::tuple<std::vector<V>,std::vector<std::tuple<size_t,size_t>>>){ return NULL; }

template <class V>
std::tuple<std::vector<V>,std::vector<std::tuple<size_t,size_t>>> unpackGraph(Graph<V>){ return NULL; }

template <class V,E>
EdgeGraph<V,E> packEdgeGraph(std::tuple<std::vector<V>,std::vector<std::tuple<size_t,size_t,E>>>){ return NULL; }

template <class V,E>
std::tuple<std::vector<V>,std::vector<std::tuple<size_t,size_t,E>>> unpackEdgeGraph(EdgeGraph<V,E>){ return NULL; }
