#include <fstream>

#include "SceneLoader.h"
#include "SceneManager.h"
#include "SceneStart.h"
#include "Stage01.h"
#include "Stage02.h"
#include "Stage03.h"
#include "Stage04.h"
#include "Stage05.h"
#include "Stage06.h"
#include "Stage07.h"
#include "Stage08.h"
#include "Stage09.h"
#include "Stage10.h"
#include "eObjectType.h"
#include "CutScene.h"
#include "CutScene01.h"
#include "CutScene02.h"
#include "CutScene03.h"

namespace catInWonderland
{
	std::map<eSceneType, std::vector<BoardObjectInfo>> SceneLoader::mGameSceneData;

	void SceneLoader::DestroyResource()
	{
		mGameSceneData.clear();
	}

	void SceneLoader::Load()
	{
		LoadScene();
		RegisterScene();
	}

	void SceneLoader::LoadScene()
	{
		loadScene(eSceneType::STAGE01, L".\\resources\\coordinate\\stage01.txt");
		loadScene(eSceneType::STAGE02, L".\\resources\\coordinate\\stage02.txt");
		loadScene(eSceneType::STAGE03, L".\\resources\\coordinate\\stage03.txt");
		loadScene(eSceneType::STAGE04, L".\\resources\\coordinate\\stage04.txt");
		loadScene(eSceneType::STAGE05, L".\\resources\\coordinate\\stage05.txt");
		loadScene(eSceneType::STAGE06, L".\\resources\\coordinate\\stage06.txt");
		loadScene(eSceneType::STAGE07, L".\\resources\\coordinate\\stage07.txt");
		loadScene(eSceneType::STAGE08, L".\\resources\\coordinate\\stage08.txt");
		loadScene(eSceneType::STAGE09, L".\\resources\\coordinate\\stage09.txt");
		loadScene(eSceneType::STAGE10, L".\\resources\\coordinate\\stage10.txt");
	}

	void SceneLoader::RegisterScene()
	{
		SceneManager::GetInstance()->RegisterScene(eSceneType::START, new SceneStart());
		SceneManager::GetInstance()->RegisterScene(eSceneType::STAGE01, new Stage01());
		SceneManager::GetInstance()->RegisterScene(eSceneType::STAGE02, new Stage02());
		SceneManager::GetInstance()->RegisterScene(eSceneType::STAGE03, new Stage03());
		SceneManager::GetInstance()->RegisterScene(eSceneType::STAGE04, new Stage04());
		SceneManager::GetInstance()->RegisterScene(eSceneType::STAGE05, new Stage05());
		SceneManager::GetInstance()->RegisterScene(eSceneType::STAGE06, new Stage06());
		SceneManager::GetInstance()->RegisterScene(eSceneType::STAGE07, new Stage07());
		SceneManager::GetInstance()->RegisterScene(eSceneType::STAGE08, new Stage08());
		SceneManager::GetInstance()->RegisterScene(eSceneType::STAGE09, new Stage09());
		SceneManager::GetInstance()->RegisterScene(eSceneType::STAGE10, new Stage10());

		SceneManager::GetInstance()->RegisterScene(eSceneType::CutScene01, new CutScene01());
		SceneManager::GetInstance()->RegisterScene(eSceneType::CutScene02, new CutScene02());
		SceneManager::GetInstance()->RegisterScene(eSceneType::CutScene03, new CutScene03());

		SceneManager::GetInstance()->setCurScene(eSceneType::START);
	}

	const std::vector<BoardObjectInfo>& SceneLoader::GetSceneData(eSceneType gameSceneType)
	{
		auto iter = mGameSceneData.find(gameSceneType);
		assert(iter != mGameSceneData.end());

		return (*iter).second;
	}

	void SceneLoader::loadScene(eSceneType sceneType, const WCHAR* fileName)
	{
		std::ifstream fin;
		fin.open(fileName, std::ios_base::in);

		assert(fin.is_open());

		unsigned int id;
		BoardObjectInfo boadrObjectInfo;
		std::vector<BoardObjectInfo> boardObjectInfos;
		boardObjectInfos.reserve(32);
		std::string trash;

		while (true)
		{
			fin >> boadrObjectInfo.BoardX;
			fin >> boadrObjectInfo.BoardY;
			fin >> id;

			boadrObjectInfo.ObjectType = static_cast<eObjectType>(id);

			if (!fin.fail())
			{
				boardObjectInfos.push_back(boadrObjectInfo);
				continue;
			}

			if (fin.eof())
			{
				break;
			}

			fin.clear();
			fin >> trash;
		}

		mGameSceneData.emplace(sceneType, boardObjectInfos);

		fin.close();
	}

	void SceneLoader::loadScene(eSceneType sceneType, const char* fileName)
	{
		std::ifstream fin;
		fin.open(fileName, std::ios_base::in);

		assert(fin.is_open());

		unsigned int id;
		BoardObjectInfo boadrObjectInfo;
		std::vector<BoardObjectInfo> boardObjectInfos;
		boardObjectInfos.reserve(32);
		std::string trash;

		while (true)
		{
			fin >> boadrObjectInfo.BoardX;
			fin >> boadrObjectInfo.BoardY;
			fin >> id;

			boadrObjectInfo.ObjectType = static_cast<eObjectType>(id);

			if (!fin.fail())
			{
				boardObjectInfos.push_back(boadrObjectInfo);
				continue;
			}

			if (fin.eof())
			{
				break;
			}

			fin.clear();
			fin >> trash;
		}

		mGameSceneData.emplace(sceneType, boardObjectInfos);
		fin.close();
	}
}