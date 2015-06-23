#pragma once

#include "Queue.h"

class Queue;

class GameChatQueue : public Queue
{
public:
	GameChatQueue();
	virtual void pushLineFromKeyboardToGame(std::string line);
};