
void FUN_004a8610(void)

{
  if (DAT_00563e98 != 0) {
    if (DAT_00563e9c == 0) {
      FUN_004a9560();
      return;
    }
    timeEndPeriod(DAT_005f9d44);
    timeKillEvent(DAT_005b9d20);
  }
  return;
}

