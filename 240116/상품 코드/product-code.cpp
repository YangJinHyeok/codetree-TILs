#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Product{
    public:
        string name;
        int code;

        Product(string name = "codetree", int code = 50){
            this->name = name;
            this->code = code;
        }

};

void printProduct(Product product){
  cout << "product " << product.code << " is " << product.name << endl; 
}


int main() {

    string a;
    int b;
    cin >> a >> b;

    Product product1 = Product();
    printProduct(product1);
    Product product2 = Product(a,b);
    printProduct(product2);


    return 0;
}