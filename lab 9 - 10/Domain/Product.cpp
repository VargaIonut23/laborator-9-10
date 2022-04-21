//
// Created by ivarg on 21.04.2022.
//

#include "Product.h"

Product::Product() {
    this->id = 0;
    this->cod = 0;
    this->nume = "";
    this->pret = 0;
}

Product::Product(int id, int cod, std::string nume, int pret) {
    this->id = id;
    this->cod = cod;
    this->nume = std::move(nume);
    this->pret = pret;
}

Product::Product(const Product &product) {
    this->id = product.id;
    this->cod = product.cod;
    this->nume = product.nume;
    this->pret = product.pret;
}

Product::~Product() = default;

int Product::getId() const {
    return this->id;
}

int Product::getCod() const {
    return this->cod;
}

std::string Product::getNume() const {
    return this->nume;
}

int Product::getPret() const {
    return this->pret;
}

void Product::setId(int id) {
    this->id = id;
}

void Product::setCod(int cod) {
    this->cod = cod;
}

void Product::setPret(int pret) {
    this->pret = pret;
}

void Product::setNume(std::string nume) {
    this->nume = std::move(nume);
}

Product &Product::operator=(const Product &product) {
    if (this != &product) {
        this->id = product.id;
        this->cod = product.cod;
        this->nume = product.nume;
        this->pret = product.pret;
    }
    return *this;
}

bool Product::operator==(const Product &product) {
    return this->id == product.id && this->cod == product.cod && this->nume == product.nume &&
           this->pret == product.pret;
}

