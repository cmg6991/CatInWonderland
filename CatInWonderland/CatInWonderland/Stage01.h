#pragma once

#include "GameScene.h"

namespace catInWonderland
{
	class GuideButton;

	class Stage01 :public GameScene
	{
	public:
		Stage01();
		virtual ~Stage01() = default;

		virtual void Enter() override;
		virtual void Update() override;
		virtual void Render() override;
		virtual void Exit() override;

	private:
		bool mbPlayerMoveCheck;
		float mGuideButtonInterval;
		GuideButton* mDirectionGuideButton[2];

		bool mbPlayerActionCheck;
		float mActionButtonInterval;
		GuideButton* mActionGuideButton;
	};
}