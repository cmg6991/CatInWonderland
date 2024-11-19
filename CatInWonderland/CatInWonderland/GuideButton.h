#pragma once

#include "Object.h"
#include "eLayerType.h"

namespace catInWonderland
{
	class GuideButton : public Object
	{
	public:
		GuideButton(hRectangle worldRectangle, hRectangle spriteRectangle, Sprite* sprite, eLayerType layerType, float duration);
		virtual ~GuideButton() = default;

		virtual void Update() override;
		virtual void Render() override;

		inline void Excute();
		inline void TurnOff();

	private:
		const float mDuration;
		bool mbExcute;
		float mElapesed;
	};

	void GuideButton::Excute()
	{
		mbExcute = true;
		mElapesed = 0.f;
	}

	void GuideButton::TurnOff()
	{
		mbExcute = false;
		mElapesed = 0.f;
	}
}