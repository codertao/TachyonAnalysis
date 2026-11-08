
/* in-flight mode enter */

void Flight_Enter(void)

{
  set_global_some_game_mode(3);
  Flight_SceneSetup();
  init_flight_start();
  return;
}

