#define __DECK__

#ifndef VECTOR
#define VECTOR
#include <vector>
#endif

#ifndef __CARD__
#include "card.h"
#endif

class Deck{

bool includeJoker;
vector<Card> cardsInDeck;

public:
	Deck(bool joker);
	vector<Card> getCardsInDeck();
	void setCardsInDeck()
	Deck shuffle(Deck d);
};

Deck::Deck(bool joker){
	includeJoker = joker;
	if(includeJoker){
		cardList.push_back(Card(0,JOKER));
		cardList.push_back(Card(0,JOKER));
	}
	for(auto suit:suitList){
		for(int c=1;c<=CARDS_IN_A_SUIT;c++){
			cardList.push_back(Card(c,suit));
		}
	}
}

vector<Card> Deck::getCardsInDeck(){
	return cardsInDeck;
}

Deck Deck::shuffle(Deck deck){
	vector<Card> cardList = deck.getCardsInDeck();
	std::random_shuffle(cardList.begin(),cardList.end());
	deck.setCardsInDeck(cardList);
	return deck;
}