#pragma once

#include "GameScene.h"

namespace catInWonderland
{
	class Stage09 :public GameScene
	{
	public:
		virtual void Enter() override;

	public:
		Stage09();
		virtual ~Stage09() = default;

	protected:
		virtual void CreateBoardObject() override;
	};
}

