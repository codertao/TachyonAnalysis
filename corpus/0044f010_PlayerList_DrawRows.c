
/* sweep */

void PlayerList_DrawRows(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_184;
  undefined1 local_180 [128];
  undefined1 local_100 [256];
  
  puVar1 = &DAT_005b3a38 + DAT_00590d60 * 0x44;
  uVar3 = 0;
  uVar2 = DAT_00590d60;
  do {
    uVar2 = uVar2 + 1;
    if (DAT_005b9014 < uVar2) {
      return;
    }
    PlayerList_FormatEntry(puVar1,local_180,&local_184);
    str_sprintf(local_100,s__3d____s_00548498,DAT_00590d60 + 1 + uVar3,local_180);
    Text_DrawAligned(local_100,DAT_00590d48,0x11c,param_1,local_184,0xffff,0x10000,2);
    param_1 = param_1 + DAT_00590d5c;
    uVar3 = uVar3 + 1;
    puVar1 = puVar1 + 0x44;
  } while (uVar3 < 0x10);
  return;
}

