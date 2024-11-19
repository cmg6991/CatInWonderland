#pragma once

#include "GameScene.h"

namespace catInWonderland
{
	class Stage10 :public GameScene
	{
	public:
		virtual void Enter() override;

	public:
		Stage10();
		virtual ~Stage10() = default;

	protected:
		virtual void CreateBoardObject() override;
	};
}

