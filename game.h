#define __GAME__

#ifndef __DECK__
#include "deck.h"
#endif

#ifndef __CARD__
#include "card.h"
#endif

#ifndef __SUIT__
#include "suit.h"
#endif

class Game{

vector<Card> cardsInGame;

public:
	Game(int numberOfDecks);
	vector<Card> getCardsInGame();
	void setCardsInGame(vector<Card> cardList);
};

Game::Game(int numberOfDecks){
	for(int deckNumber=1;deckNumber<=numberOfDecks;deckNumber++){
		Deck deck = Deck(false);
		deck.shuffle();
		for(auto card:deck)	cardsInGame.push_back(card);
	}
}

vector<Card> Game::getCardsInGame(){
	return cardsInGame;
}

void Game::setCardsInGame(vector<Card> cardList){
	cardsInGame = cardList;
}