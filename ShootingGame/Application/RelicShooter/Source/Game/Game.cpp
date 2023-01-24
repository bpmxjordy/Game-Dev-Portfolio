#include "Game.h"

#include <iostream>
#include <Windows.h>

#include "../Engine/Input/InputDevice.h"
#include "../Engine/System/Context/SysContextProvider.h"
#include "../Engine/Utils/Utils.h"
#include "GameObjects/KeyboardAndMouseInputDevices.h"

#include "GameStates/GameStateTest.h"
#include "GameStates/GameStateStart.h"


constexpr int WINDOW_WIDTH = 1920;
constexpr int WINDOW_HEIGHT = 1080;
const std::string WINDOW_NAME = "Shootem-up";

Game::Game()
	:m_bExit(false)
	,m_pInputDevice(nullptr)
{
}

Game::~Game()
{
	SAFE_DELETE_PTR(m_pInputDevice)
}

void Game::Initialise()
{
	C_SysContext::Initialise();

	//setup the game data manager
	m_GameDataManager.Initialise();
	C_SysContext::Set<GameDataManager>(&m_GameDataManager);

	//setup the frame timer
	C_SysContext::Set<FrameTimer>(&m_FrameTimer);

	//setup the window manager
	C_SysContext::Set<WindowManager>(&m_WindowManager);

	//setup the asset manager
	C_SysContext::Set<AssetManager>(&m_AssetManager);

	//setup the renderer
	m_RenderManager.Initialise(WINDOW_WIDTH, WINDOW_HEIGHT,WINDOW_NAME.c_str());
	C_SysContext::Set<RenderManager>(&m_RenderManager);

	//setup the audio manager
	C_SysContext::Set<AudioManager>(&m_AudioManager);

	//setup the input manager
	InputManager::Initialise();
	C_SysContext::Set<InputManager>(&m_InputManager);
	KeyboardAndMouseInputDevices* tkbm = new KeyboardAndMouseInputDevices();
	m_InputManager.SetInputDevice(tkbm);

	//setup the game state manager
	GameStateManager::Initialise();
	C_SysContext::Set<GameStateManager>(&m_GameStateManager);

	//add a default game state
	GameStateStart* m_gameStateStart = new GameStateStart();
	m_GameStateManager.QueueGameState(m_gameStateStart);


	


}

void Game::Run()
{
	m_FrameTimer.Initialise();

	while (!m_bExit)
	{
		//start of game frame
		m_FrameTimer.StartFrame();
		
		//Update Player Input First
		m_InputManager.Update();

		//update the game state
		m_GameStateManager.Update();

		//update the audio manager
		m_AudioManager.Update();

		//render
		m_RenderManager.Render();

		//end of game frame
		m_FrameTimer.EndFrame();	
	}
}
