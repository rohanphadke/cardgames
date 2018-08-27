#ifndef __CARD__
#define __CARD__
#endif

class Card{

int value;
int suite;

public:
	Card(int val,int sui);
	int getValue();
	void setValue(int val);
	int getSuite();
	void setSuite(int sui);
};

Card::Card(int val,int sui){
	value = val;
	suite = sui;
}

Card::~Card(){
}

int Card::getValue(){
	return value;
}

void Card::setValue(int val){
	value = val;
}

int Card::getSuite(){
	return suite;
}

void Card::setSuite(int sui){
	suite = sui;
}