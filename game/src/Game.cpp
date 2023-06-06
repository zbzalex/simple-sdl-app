#include <game/Precompiled.h>
#include <game/Game.h>
#include <game/Input.h>

Game::Game()
{
}

void Game::Init() noexcept
{
  m_ScreenRateX = SCREEN_WIDTH / 640.f;
  m_ScreenRateY = SCREEN_HEIGHT / 480.f;
}

void Game::Update(float deltaTime) noexcept
{
  // game loop

  if (Input::Instance().GetKeyState(SDLK_ESCAPE) == 1)
  {
    Stop();

    return;
  }

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glClearColor(0.6f, 0.9f, 1.f, 1.f);

  // some code

  glFlush();
}
