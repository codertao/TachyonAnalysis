
/* sweep */

void Starbase_ReturnToHub(void)

{
  g_NextMode = &g_Mode_StarbaseHub;
  g_MissionEndFlag = 1;
  return;
}

