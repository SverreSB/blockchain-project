#include "Blockchain.h"
#include <iostream>
using namespace std;

int main() {
    Blockchain blockchain = Blockchain();
    
    for(int i = 1; i <= 3; i++) {
        cout << "Mining block" << i << "..." << endl;

        blockchain.addBlock(Block(i, "data"));
        blockchain.display();
    }
}