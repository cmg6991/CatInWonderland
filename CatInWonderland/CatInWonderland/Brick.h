#pragma once

#include "BoardObject.h"

namespace catInWonderland
{
	class Brick : public BoardObject
	{
	public:
		Brick(const ObjectInfo& objectInfo, size_t boardX, size_t boardY, bool mbRed);
		Brick(hRectangle worldRectangle, hRectangle spriteRectangle, Sprite* sprite, eLayerType layerType, size_t boardX, size_t boardY, bool mbRed, bool bLeft = true);
		virtual ~Brick() = default;

		virtual void Update() override;

		inline bool GetIsRed() const;

	private:
		bool mbRed;
	};

	bool Brick::GetIsRed() const
	{
		return mbRed;
	}
}