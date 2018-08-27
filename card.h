#define __CARD__

#ifndef __SUIT__
#include "suit.h"
#endif

#ifndef IOSTREAM
#include <iostream>
#endif

class Card{

int value;
int suit;

public:
	Card(int val,int sui);
	int getValue();
	void setValue(int val);
	int getSuit();
	void setSuit(int sui);
	std::string showValue();
	std::string showSuit();
	void showCard();
};

Card::Card(int val,int sui){
	value = val;
	suit = sui;
}

int Card::getValue(){
	return value;
}

void Card::setValue(int val){
	value = val;
}

int Card::getSuit(){
	return suit;
}

void Card::setSuit(int sui){
	suit = sui;
}

std::string Card::showValue(){
	switch(getValue()){
		case 11:	return "J";
		case 12:	return "Q";
		case 13:	return "K";
		case 1:		return "A";
		case 2:		return "2";
		case 3:		return "3";
		case 4:		return "4";
		case 5:		return "5";
		case 6:		return "6";
		case 7:		return "7";
		case 8:		return "8";
		case 9:		return "9";
		case 10:	return "10";
	}
}

std::string Card::showSuit(){
	switch(getSuit()){
		case SPADES:	return "spades";
		case HEARTS:	return "hearts";
		case CLUBS:		return "clubs";
		case DIAMONDS:	return "diamonds";
		default:		return "Joker";
	}
}

void Card::showCard(){
	if(Card::showSuit().compare("Joker")==0){
		std::cout<<"Joker";
	}else{
		std::cout<<Card::showValue()<<" of "<<Card::showSuit();
	}
}