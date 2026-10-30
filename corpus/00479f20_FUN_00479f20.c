
void FUN_00479f20(void)

{
  if (DAT_005a4b4c != 0) {
    FUN_00440bd0();
    return;
  }
  FUN_0043ac90(&DAT_00583420);
  FUN_0048bf30();
  FUN_0046ded0(&DAT_00583420,s_WndStarBaseJobsComplete_0055227c);
  FUN_0047a310();
  if (DAT_005635dc != 0) {
    Ui_RefreshWindow(&DAT_00583420,s_WndStarBaseJobsComplete_0055227c,0,0);
  }
  return;
}

