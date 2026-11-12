
/* sweep */

void Loadout_SetOpen(int param_1,int param_2)

{
  DAT_005a68c8 = param_1;
  if (param_1 == 0) {
    Input_PopBindingSet(&PTR_DAT_0053ea10);
    if (param_2 != 0) {
      Loadout_Commit();
      Autopilot_End();
      return;
    }
  }
  else {
    Loadout_Build();
    PlayerList_SetVisible(0,0);
    Input_PushBindingSet(&PTR_DAT_0053ea10);
  }
  return;
}

