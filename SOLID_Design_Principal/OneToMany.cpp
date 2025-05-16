#include<iostream>
#include<string>
#include<vector>

using namespace std;


// It's product card representing of any product.
class Product{
    private:
        int price;
        string name;
    public:
        Product(int p, string name){
            this->price = p;
            this->name = name;
        }
};
//This is a shoping card. It will store the all product in a vector.
class Shopping_card{
    private:
        vector<Product>products;
    public:
        void addProduct(const Product& p){
            products.push_back(p);
        }
};


class CardInvoicePring{

};
class CartDBStorage{

};