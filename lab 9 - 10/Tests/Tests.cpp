//
// Created by ivarg on 21.04.2022.
//

#include "Tests.h"

void Tests::testRepository() {
    Repository<Product> repo;
    Product p1(1, 1, "desc1", 10);
    Product p2(2, 2, "desc2", 20);
    repo.addProduct(p1);
    repo.addProduct(p2);
    assert(repo.getSize() == 2);
    assert(repo.getAll()[0] == p1);
    assert(repo.getAll()[1] == p2);
    repo.delProduct(p1);
    assert(repo.getSize() == 1);
    assert(repo.getAll()[0] == p2);
    repo.delProduct(p2);
    assert(repo.getSize() == 0);
}

void Tests::testProduct() {
    Product p1(1, 1, "desc", 10);
    assert(p1.getId() == 1);
    assert(p1.getPret() == 10);
    assert(p1.getNume() == "desc");
    assert(p1.getCod() == 1);
}

void Tests::testAll() {
    testProduct();
    testRepository();
}