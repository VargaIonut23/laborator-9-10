//
// Created by ivarg on 21.04.2022.
//

#ifndef LAB_9___10_REPOSITORY_H
#define LAB_9___10_REPOSITORY_H

#include<vector>

template<class T>
class Repository {
private:
    std::vector<T> products;
public:
    Repository() = default;

    ~Repository() = default;

    void addProduct(T product) {
        products.push_back(product);
    }

    void delProduct(T product) {
        for (auto i = products.begin(); i != products.end(); i++) {
            if (*i == product) {
                products.erase(i);
                break;
            }
        }
    }

    void updateProduct(T product) {
        for (auto i = products.begin(); i != products.end(); i++) {
            if (*i == product) {
                products.erase(i);
                products.push_back(product);
                break;
            }
        }
    }

    std::vector<T> getAll() {
        return products;
    }

    int getSize() {
        return products.size();
    }
};


#endif //LAB_9___10_REPOSITORY_H
