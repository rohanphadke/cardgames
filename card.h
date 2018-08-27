#define __CARD__

#ifndef __SUIT__
#include "suit.h"
#endif

class Card{

int value;
int suit;

public:
	Card(int val,int sui);
	int getValue();
	void setValue(int val);
	int getSuite();
	void setSuite(int sui);
};

Card::Card(int val,int sui){
	value = val;
	suit = sui;
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
	return suit;
}

void Card::setSuite(int sui){
	suit = sui;
}