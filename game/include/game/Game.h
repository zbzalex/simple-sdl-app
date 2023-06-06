#ifndef GAME_H
#define GAME_H

class Game
{
public:
  Game();

  void Init() noexcept;
  
  void Update(float dt) noexcept;

  inline bool IsRunning() const { return m_Running; }

  inline void Stop() { m_Running = false; }

  inline float GetScreenRateX() const { return m_ScreenRateX; }
  inline float GetScreenRateY() const { return m_ScreenRateY; }

protected:
  bool m_Running = true;

  float m_ScreenRateX = 0.f;
  float m_ScreenRateY = 0.f;
};

#endif // GAME_H