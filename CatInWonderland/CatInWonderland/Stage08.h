#pragma once

#include "GameScene.h"

namespace catInWonderland
{
	class Stage08 :public GameScene
	{
	public:
		virtual void Enter() override;

	public:
		Stage08();
		virtual ~Stage08() = default;

	protected:
		virtual void CreateBoardObject() override;
	};
}

