//
// Created by ivarg on 21.04.2022.
//

#ifndef LAB_9___10_PRODUCT_H
#define LAB_9___10_PRODUCT_H

#include<string>

class Product {
private:
    int id;
    int cod;
    std::string nume;
    int pret;
public:
    Product();

    Product(int id, int cod, std::string nume, int pret);

    Product(const Product &product);

    ~Product();

    int getId() const;

    int getCod() const;

    std::string getNume() const;

    int getPret() const;

    void setId(int id);

    void setCod(int cod);

    void setNume(std::string nume);

    void setPret(int pret);

    Product &operator=(const Product &product);

    bool operator==(const Product &product);
};


#endif //LAB_9___10_PRODUCT_H
