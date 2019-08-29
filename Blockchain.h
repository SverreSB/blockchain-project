#include <cstdint>
#include <vector>
#include <iostream>
#include "Block.h"
 
using namespace std;

class Blockchain {
    public: 
        Blockchain();
        
        void addBlock(Block newBlock);
        void display();

    private:
        uint32_t difficulty;
        vector<Block> chain;

        Block getLastBlock() const;
};