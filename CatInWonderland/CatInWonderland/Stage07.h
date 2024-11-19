#pragma once

#include "GameScene.h"

namespace catInWonderland
{
	class Stage07 :public GameScene
	{
	public:
		virtual void Enter() override;

	public:
		Stage07();
		virtual ~Stage07() = default;

	protected:
		virtual void CreateBoardObject() override;
	};
}

