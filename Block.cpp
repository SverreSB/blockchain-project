#include "Block.h"
#include "sha256.h"

using namespace std;

Block::Block(uint32_t indexIn, const string &dataIn) {
	index = indexIn;
	data = dataIn;
	nonce = -1;
	timestamp = time(nullptr);
}

string Block::getHash() {
	return hash;
}