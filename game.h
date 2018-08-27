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

std::vector<Card> cardsInGame;

public:
	Game(int numberOfDecks);
	std::vector<Card> getCardsInGame();
	void setCardsInGame(std::vector<Card> cardList);
	void showCardsInGame();
};

Game::Game(int numberOfDecks){
	for(int deckNumber=1;deckNumber<=numberOfDecks;deckNumber++){
		Deck deck = Deck(true);
		deck.shuffle();
		for(auto card:deck.getCardsInDeck())	cardsInGame.push_back(card);
	}
}

std::vector<Card> Game::getCardsInGame(){
	return cardsInGame;
}

void Game::setCardsInGame(std::vector<Card> cardList){
	cardsInGame = cardList;
}

void Game::showCardsInGame(){
	for(auto card:cardsInGame){
		card.showCard();
		std::cout<<std::endl;
	}
}