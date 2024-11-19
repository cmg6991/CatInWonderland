#include "EnumLoader.h"
#include "SpriteManager.h"
#include "eSpriteType.h"
#include "SceneLoader.h"
#include "SoundManager.h"
#include "ConstantTable.h"

namespace catInWonderland
{
	void EnumLoader::Load()
	{
		LoadSprtie();
		LoadAnimationRectangle();
		LoadSound();
		SceneLoader::Load();
	}

	void EnumLoader::LoadSprtie()
	{
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Player, L".\\resources\\image\\player.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::YellowTile, L".\\resources\\image\\1-2.nonblendblock.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::NonBlendYellowTile, L".\\resources\\image\\1-2.block.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::NonBlendPurpleTile, L".\\resources\\image\\3-5.block.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::PurpleTile, L".\\resources\\image\\3-5.nonblendblock.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::RedBrick, L".\\resources\\image\\red_brick.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::BlueBrick, L".\\resources\\image\\blue_brick.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Butterfly, L".\\resources\\image\\burterfly_sprite.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Obstacle, L".\\resources\\image\\block_object.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::BlueChangeColorTile, L".\\resources\\image\\blue_cube.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::RedChangeColorTile, L".\\resources\\image\\red_cube.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::YellowPortal, L".\\resources\\image\\yellow_portal.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::PurplePortal, L".\\resources\\image\\purple_portal.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Challange, L".\\resources\\image\\challange1.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::TitleText, L".\\resources\\image\\title_text.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::MainTitle, L".\\resources\\image\\main_title.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Stage01, L".\\resources\\image\\stage01_map.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Stage02, L".\\resources\\image\\stage02_map.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Stage03, L".\\resources\\image\\stage03_map.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Stage04, L".\\resources\\image\\stage04_map.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Stage05, L".\\resources\\image\\stage05_map.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene01_01, L".\\resources\\image\\cutScene2_1.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene01_02, L".\\resources\\image\\cutScene2_2.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene01_03, L".\\resources\\image\\cutScene2_3.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene01_04, L".\\resources\\image\\cutScene2_4.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene02_01, L".\\resources\\image\\cutScene4_1.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene02_02, L".\\resources\\image\\cutScene4_2.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene02_03, L".\\resources\\image\\cutScene4_3.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene02_04, L".\\resources\\image\\cutScene4_4.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene03_01, L".\\resources\\image\\cutScene5_1.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene03_02, L".\\resources\\image\\cutScene5_2.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene03_03, L".\\resources\\image\\cutScene5_3.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene03_04, L".\\resources\\image\\cutScene5_4.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::CutScene03_05, L".\\resources\\image\\cutScene5_5.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::StageClear, L".\\resources\\image\\stage_clear.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::RotateCount, L".\\resources\\image\\rotate_count.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::StageName1, L".\\resources\\image\\StageTitle01.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::StageName2, L".\\resources\\image\\StageTitle02.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::StageName3, L".\\resources\\image\\StageTitle03.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::StageName4, L".\\resources\\image\\StageTitle04.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::StageName5, L".\\resources\\image\\StageTitle05.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::StageName6, L".\\resources\\image\\StageTitle06.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::StageName7, L".\\resources\\image\\StageTitle07.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::StageName8, L".\\resources\\image\\StageTitle08.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::StageName9, L".\\resources\\image\\StageTitle09.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::StageName10, L".\\resources\\image\\StageTitle10.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::SoundOn, L".\\resources\\image\\SoundOn.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::SoundOff, L".\\resources\\image\\SoundOff.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Home, L".\\resources\\image\\Home.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::EnterButton, L".\\resources\\image\\enter_button.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::ExitButton, L".\\resources\\image\\exit_button.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::ButtonA, L".\\resources\\image\\AKey.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::ButtonD, L".\\resources\\image\\DKey.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::ButtonQ, L".\\resources\\image\\QKey.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::ButtonE, L".\\resources\\image\\EKey.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::ButtonW, L".\\resources\\image\\WKey.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::SpaceButton, L".\\resources\\image\\SpaceButton.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::RotateCountNumber0, L".\\resources\\image\\Rotate0.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::RotateCountNumber1, L".\\resources\\image\\Rotate1.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::RotateCountNumber2, L".\\resources\\image\\Rotate2.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::RotateCountNumber3, L".\\resources\\image\\Rotate3.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::RotateCountNumber4, L".\\resources\\image\\Rotate4.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::RotateCountNumber5, L".\\resources\\image\\Rotate5.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::RotateCountNumber6, L".\\resources\\image\\Rotate6.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::RotateCountNumber7, L".\\resources\\image\\Rotate7.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Guide11, L".\\resources\\image\\1-1stage.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Guide12, L".\\resources\\image\\1-2stage.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Guide21, L".\\resources\\image\\2-1stage.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Guide31, L".\\resources\\image\\3-1stage.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Guide41, L".\\resources\\image\\4-1stage.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Guide51, L".\\resources\\image\\5-1stage.bmp");
		SpriteManager::GetInstance()->LoadSpriteImage(eSpriteType::Guide52, L".\\resources\\image\\5-2stage.bmp");
	}

	void EnumLoader::LoadAnimationRectangle()
	{
		SpriteManager::GetInstance()->LoadAnimationRectangle(eAnimationType::PlayerIdle, L".\\resources\\coordinate\\player_idle.txt", PLAYER_IDLE_INTERVAL);
		SpriteManager::GetInstance()->LoadAnimationRectangle(eAnimationType::PlayerMove, L".\\resources\\coordinate\\player_move.txt", PLAYER_MOVE_INTERVAL);
		SpriteManager::GetInstance()->LoadAnimationRectangle(eAnimationType::PlayerPlummet, L".\\resources\\coordinate\\player_plummet.txt", PLAYER_PlUMMET_INTERVAL);
		SpriteManager::GetInstance()->LoadAnimationRectangle(eAnimationType::PlayerAction, L".\\resources\\coordinate\\player_action.txt", PLAYER_ACTION_INTERVAL);
		SpriteManager::GetInstance()->LoadAnimationRectangle(eAnimationType::RedButterfly, L".\\resources\\coordinate\\RedButterfly.txt", BUTTERPLY_IDLE_INTERVAL);
		SpriteManager::GetInstance()->LoadAnimationRectangle(eAnimationType::BlueButterfly, L".\\resources\\coordinate\\BlueButterfly.txt", BUTTERPLY_IDLE_INTERVAL);
		SpriteManager::GetInstance()->LoadAnimationRectangle(eAnimationType::YellowButterfly, L".\\resources\\coordinate\\YellowButterfly.txt", BUTTERPLY_IDLE_INTERVAL);
	}

	void EnumLoader::LoadSound()
	{
		// ÀÌ°Å
		SoundManager::GetInstance()->LoadMusic(eSoundList::StartBGM, true, ".\\resources\\music\\Main.ogg");
		SoundManager::GetInstance()->LoadMusic(eSoundList::Stage12BGM, true, ".\\resources\\music\\Stage12.ogg");
		SoundManager::GetInstance()->LoadMusic(eSoundList::Stage345BGM, true, ".\\resources\\music\\Stage345.ogg");
		SoundManager::GetInstance()->LoadMusic(eSoundList::CatDropEffect, false, ".\\resources\\music\\Cat_Drop.ogg");
		SoundManager::GetInstance()->LoadMusic(eSoundList::CatGoalEffect, false, ".\\resources\\music\\Cat_Goal.ogg");
	}
}