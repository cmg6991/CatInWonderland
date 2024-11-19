#pragma once
#include "Object.h"

namespace catInWonderland
{
	enum class eButtonState
	{
		None,
		Hover,
		Click
	};

	class Button : public Object
	{
	public:
		Button(const ObjectInfo& objectInfo);
		Button(hRectangle worldRectangle, hRectangle spriteRectangle, Sprite* sprite, eLayerType layerType, bool bLeft = true);
		virtual ~Button() = default;

		virtual void Update() override;

		inline eButtonState GetButtonState() const;

	private:
		eButtonState mButtonState;
	};

	eButtonState Button::GetButtonState() const
	{
		return mButtonState;
	}
}


