#pragma once
#include "BoardObject.h"

namespace catInWonderland	//��� �׸���
{
	class Tile : public BoardObject
	{
	public:
		Tile(const ObjectInfo& objectInfo, size_t boardX, size_t boardY);
		Tile(hRectangle worldRectangle, hRectangle spriteRectangle, Sprite* sprite, eLayerType layerType, size_t boardX, size_t boardY, bool bLeft = true);
		virtual ~Tile() = default;

		virtual void Update() override;
	};
}