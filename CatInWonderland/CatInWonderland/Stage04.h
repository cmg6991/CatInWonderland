#pragma once

#include "GameScene.h"

namespace catInWonderland
{
	class Stage04 :public GameScene
	{
	public:
		Stage04();
		virtual ~Stage04() = default;

		virtual void Enter() override;
		virtual void Update() override;
	};
}

