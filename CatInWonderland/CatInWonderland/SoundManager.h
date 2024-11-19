#pragma once

#include <string>

#include "eSoundType.h"

// FMOD
#ifndef _WIN64
#include "fmod.hpp"
#pragma comment (lib, "fmod_vc.lib")
using namespace FMOD;
#endif
#ifdef _WIN64
#include "fmod.hpp"
#pragma comment (lib, "fmod_vc.lib")
using namespace FMOD;
#endif

namespace catInWonderland
{
	enum class eSoundChannel
	{
		BGM,
		Effect,
		Size
	};

	enum class eSoundList
	{
		StartBGM,
		Stage12BGM,
		Stage345BGM,
		CatDropEffect,
		CatGoalEffect,
		Size
	};

	class SoundManager final
	{
	public:
		static SoundManager* GetInstance();
		static void DestroyInstance();

		void LoadMusic(eSoundList list, bool loopcheck, const char* music);

		void PlayMusic(eSoundList list, eSoundChannel channel);
		void StopMusic(eSoundChannel channel);
 
		void SetVolume(float volume);

	private:
		SoundManager();
		~SoundManager();

	private:
		static SoundManager* mInstance;

		FMOD::System* mSystem;
		FMOD::Channel* mChannel[static_cast<int>(eSoundChannel::Size)];
		FMOD::Sound* mSoundList[static_cast<int>(eSoundList::Size)];
		float mVolume;
	};

}