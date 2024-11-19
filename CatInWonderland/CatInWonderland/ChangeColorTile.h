#pragma once
#include "BoardObject.h"

namespace catInWonderland
{
	class ChangeColorTile : public BoardObject
	{
	public:
		ChangeColorTile(const ObjectInfo& objectInfo, size_t boardX, size_t boardY, bool bRed);
		ChangeColorTile(hRectangle worldRectangle, hRectangle spriteRectangle, Sprite* sprite, eLayerType layerType, size_t boardX, size_t boardY, bool bRed, bool bLeft = true);
		virtual ~ChangeColorTile() = default;

		virtual void Update();

		inline bool GetIsRed() const;

	private:
		bool mbRed;
	};

	bool ChangeColorTile::GetIsRed() const
	{
		return mbRed;
	}
}


