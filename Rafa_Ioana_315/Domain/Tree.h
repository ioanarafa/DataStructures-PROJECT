#pragma once
#include "Node.h"
#include <iostream>
#include <vector>

using namespace std;
template <class T> class Multime;
template <class T>
class Tree {
private:
    Node<T> *root;

    void add(Node<T> *rad, T elem) {
        if(rad->info > elem){
            if(rad->left != nullptr) {
                add(rad->left, elem);
            }else{
                rad->left = new Node<T>(elem, nullptr, nullptr);
            }
        }else{
            if(rad->right != nullptr) {
                add(rad->right, elem);
            }else{
                rad->right = new Node<T>(elem, nullptr, nullptr);
            }
        }
    };

    void afisareIn(Node<T> *x) {
        if (x != nullptr) {
            afisareIn(x->left);
            cout << x->info << endl;
            afisareIn(x->right);
        }
    };

    bool search(Node<T> *rad, T elem) {
        if (rad->info == elem)
            return true;
        else if (elem < rad->info) {
            if (rad->left == nullptr)
                return false;
            return search(rad->left, elem);
        } else {
            if (rad->right == nullptr)
                return false;
            return search(rad->right, elem);
        }
    }

    Node<T>* remove(Node<T>* rad, T elem) {
        if(rad == nullptr)
            return rad;
        if(elem < rad->info)
            rad->left = remove(rad->left,elem);
        else if (elem > rad->info)
            rad->right = remove(rad->right,elem);
        else {
            if(rad->left == nullptr && rad->right == nullptr) {
                if (this->root->info == rad->info)
                    this->root = nullptr;
                return nullptr;
            }
            else if(rad->left == nullptr) {
                Node<T>*aux = rad;
                if (this->root == rad)
                    this->root = rad->right;
                rad = rad->right;
                delete aux;
                return rad;
            }
            else if(rad->right == nullptr) {
                Node<T>*aux = rad;
                if (this->root == rad)
                    this->root = rad->left;
                rad = rad->left;
                delete aux;
                return rad;
            }
            Node<T>*aux = findMin(rad->right);
            rad->info = aux->info;
            rad->right = remove(rad->right,aux->info);
            if (this->root == nullptr)
                this->root = rad;
        }
        return rad;
    }

    Node<T>* findMin(Node<T> *rad){
        while (rad->left != nullptr)
            rad = rad->left;
        return rad;
    }


public:

    Tree() {
        this->root = nullptr;
    };

    void add(T elem) {
        if(this->root == nullptr) this->root = new Node<T>(elem, nullptr, nullptr);
        else add(this->root, elem);
    }

    void afisare() {
        afisareIn(this->root);
        cout << endl;
    }

    vector<T> getAll(){
        vector<T> rez;
        while (this->root != nullptr){
            rez.push_back(this->root->info);
            sterge(this->root->info);
        }
        return rez;
    }

    int getSize(){
        int size = 0;
        vector<T>* rez;
        while (this->root != nullptr){
            size += 1;
            sterge(this->root->info);
        }
        return size;
    };


    bool cauta(T elem) {
        if(this->root == nullptr) this->root = new Node<T>(elem, nullptr, nullptr);
        return search(this->root, elem);
    }

    void sterge(T elem){
        remove(this->root, elem);
    }

    ~Tree(){}
    friend class Multime<T>;
};