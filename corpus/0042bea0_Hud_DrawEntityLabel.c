
/* sweep */

void Hud_DrawEntityLabel(int param_1,int param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  if (((param_2 != 0) && (*(int *)(param_2 + 0x8c) != 0)) && (*(short *)(param_2 + 0x76) != 0x13)) {
    Ent_ToCameraSpace(param_2 + 0x18);
    if (0 < *(int *)(param_2 + 0x48)) {
      View_ProjectPointFixed(param_2 + 0x40,&local_c);
      local_c = local_c >> 7;
      local_8 = (local_8 >> 7) +
                ((uint)((longlong)DAT_005a67e4 * 0x10) >> 0x10 |
                (int)((ulonglong)((longlong)DAT_005a67e4 * 0x10) >> 0x20) << 0x10);
      iVar1 = Ent_GetDisplayName(param_2);
      if (iVar1 != 0) {
        Hud_DrawText(iVar1,*(undefined4 *)(param_1 + 0x71c),local_c,local_8,0xffffff,0,0x44);
      }
    }
  }
  return;
}

