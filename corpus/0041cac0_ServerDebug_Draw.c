
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void ServerDebug_Draw(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_88 [132];
  
  Gfx_Lock();
  bVar1 = *(byte *)(*DAT_005b2770 + 4);
  Ui_DrawBox(DAT_005b276c,0x14,0x14,500,400,0x80,DAT_005b2770,s_SERVER_DEBUG_00534e80,0xffff00,80000
             ,2);
  uVar5 = 0;
  iVar4 = 0x2c;
  piVar3 = DAT_006af660;
  if (DAT_005897e0 != 0) {
    do {
      if (*piVar3 != 0) {
        iVar2 = piVar3[0x32];
        str_sprintf(local_88,s_PLYR__d____2f____2f____2f_00534e64,uVar5,
                    (double)((float)*(int *)(iVar2 + 0x34) * _DAT_0052e5d8),
                    (double)((float)*(int *)(iVar2 + 0x38) * _DAT_0052e5d8),
                    (double)((float)*(int *)(iVar2 + 0x3c) * _DAT_0052e5d8));
        Text_DrawAligned(local_88,DAT_005b2770,0x1c,iVar4,0xffffff,0xffff,0x10000,2);
        iVar4 = iVar4 + (uint)bVar1;
      }
      uVar5 = uVar5 + 1;
      piVar3 = piVar3 + 0x82;
    } while (uVar5 < DAT_005897e0);
  }
  return;
}

