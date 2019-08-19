#include <cstdint>
#include <iostream>

using namespace std;

class Block {
	public:
		string prevHash;

		Block(uint32_t indexIn, const string &dataIn);
		
		string getHash();
		
		void mineBlock(uint32_t difficulty);

	private:
		uint32_t index;
		int64_t nonce;
		string data;
		string hash;
		time_t timestamp;

		string calculateHash() const;
};