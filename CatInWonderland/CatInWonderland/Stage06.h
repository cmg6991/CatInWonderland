#pragma once

#include "GameScene.h"

namespace catInWonderland
{
	class Stage06 :public GameScene
	{
	public:
		virtual void Enter() override;

	public:
		Stage06();
		virtual ~Stage06() = default;

	protected:
		virtual void CreateBoardObject() override;
	};
}

