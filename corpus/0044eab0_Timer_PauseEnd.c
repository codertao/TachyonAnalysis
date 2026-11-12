
/* sweep: guess */

void Timer_PauseEnd(void)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  GLBL_loopTime = GLBL_loopTime + (DVar1 - DAT_00590e44);
  return;
}

