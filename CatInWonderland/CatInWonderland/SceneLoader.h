#pragma once

#include <Windows.h>
#include <vector>
#include <map>

#include "BoardObjectInfo.h"
#include "eSceneType.h"

namespace catInWonderland
{
	class SceneLoader
	{
	public:
		static void DestroyResource();

		static void Load();
		static void LoadScene();
		static void RegisterScene();

		static const std::vector<BoardObjectInfo>& GetSceneData(eSceneType gameSceneType);

	private:
		static void loadScene(eSceneType sceneType, const WCHAR* fileName);
		static void loadScene(eSceneType sceneType, const char* fileName);

	public:
		SceneLoader() = delete;
		~SceneLoader() = delete;

	private:
		static std::map<eSceneType, std::vector<BoardObjectInfo>> mGameSceneData;
	};
}

