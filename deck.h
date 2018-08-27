#define __DECK__

#ifndef VECTOR
#define VECTOR
#include <vector>
#endif

#ifndef ALGORITHM
#define ALGORITHM
#include <algorithm>
#endif

#ifndef __CARD__
#include "card.h"
#endif

class Deck{

bool includeJoker;
std::vector<Card> cardsInDeck;

public:
	Deck(bool joker);
	std::vector<Card> getCardsInDeck();
	void setCardsInDeck(std::vector<Card> cardList);
	void shuffle();
};

Deck::Deck(bool joker){
	includeJoker = joker;
	if(includeJoker){
		cardsInDeck.push_back(Card(0,JOKER));
		cardsInDeck.push_back(Card(0,JOKER));
	}
	for(int suit=1;suit<=4;suit++){
		for(int c=1;c<=CARDS_IN_A_SUIT;c++){
			cardsInDeck.push_back(Card(c,suit));
		}
	}
}

std::vector<Card> Deck::getCardsInDeck(){
	return cardsInDeck;
}

void Deck::setCardsInDeck(std::vector<Card> cardList){
	cardsInDeck=cardList;
}

void Deck::shuffle(){
	std::vector<Card> cardList = Deck::getCardsInDeck();
	std::random_shuffle(cardList.begin(),cardList.end());
	Deck::setCardsInDeck(cardList);
}