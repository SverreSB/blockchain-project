#include "Blockchain.h"

using namespace std;

Blockchain::Blockchain() {
	chain.emplace_back(Block(0, "Genesis block"));
	difficulty = 10;
}

void Blockchain::addBlock(Block newBlock) {
	newBlock.prevHash = getLastBlock().getHash();
	newBlock.mineBlock(difficulty);
	chain.push_back(newBlock);
}

Block Blockchain::getLastBlock() const {
	return chain.back();
}

void Blockchain::display() {
	chain.back().display();
}