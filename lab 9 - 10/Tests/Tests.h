//
// Created by ivarg on 21.04.2022.
//

#ifndef LAB_9___10_TESTS_H
#define LAB_9___10_TESTS_H

#include"../Domain/Product.h"
#include"../Repository/Repository.h"
#include<cassert>

class Tests {
private:
    static void testRepository();

    static void testProduct();

public:
    static void testAll();
};


#endif //LAB_9___10_TESTS_H
