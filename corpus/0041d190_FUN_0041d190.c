
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d190(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 auStack_80 [128];
  
  FUN_00452180();
  uVar1 = (uint)*(byte *)(*DAT_005b2770 + 4);
  if (DAT_00564ae4 == 0) {
    local_8c = 0;
  }
  else {
    (*DAT_00604570)(&local_88,&local_84,&local_8c);
  }
  FUN_0041f6e0(DAT_005b276c,10,10,400,local_8c * uVar1 + 0x8c,0x80,DAT_005b2770,
               s_RENDER_DEBUG_00535028,0xffff00,80000,2);
  str_sprintf(auStack_80,s_POLYS_SUBMITTED___d_00535014,DAT_006c8fa4);
  FUN_0048e970(auStack_80,DAT_005b2770,0x1c,0x2c,0xffffff,0xffff,0x10000,2);
  iVar3 = uVar1 + 0x2c;
  str_sprintf(auStack_80,s_POLYS_RENDERED___d_00535000,DAT_006c8fa8);
  FUN_0048e970(auStack_80,DAT_005b2770,0x1c,iVar3,0xffffff,0xffff,0x10000,2);
  str_sprintf(auStack_80,s_PEAK_POLYS___d_00534ff0,DAT_006c8fc0);
  FUN_0048e970(auStack_80,DAT_005b2770,0xe4,iVar3,0xffffff,0xffff,0x10000,2);
  iVar3 = iVar3 + uVar1;
  str_sprintf(auStack_80,s_VERTICES___d_00534fe0,DAT_006c8fb0);
  FUN_0048e970(auStack_80,DAT_005b2770,0x1c,iVar3,0xffffff,0xffff,0x10000,2);
  str_sprintf(auStack_80,s_PEAK_VERTICES___d_00534fcc,DAT_006c8fc4);
  FUN_0048e970(auStack_80,DAT_005b2770,0xe4,iVar3,0xffffff,0xffff,0x10000,2);
  str_sprintf(auStack_80,s_FLUSH_COUNT___d___d_FORCED__00534fac,DAT_006c8fb8,DAT_006c8fbc);
  FUN_0048e970(auStack_80,DAT_005b2770,0x1c,iVar3 + uVar1,0xffffff,0xffff,0x10000,2);
  iVar3 = iVar3 + uVar1 + uVar1;
  str_sprintf(auStack_80,s_PIPEHEADERS___d_00534f9c,DAT_006c8fb4);
  FUN_0048e970(auStack_80,DAT_005b2770,0x1c,iVar3,0xffffff,0xffff,0x10000,2);
  iVar3 = iVar3 + uVar1;
  str_sprintf(auStack_80,s_FRAMERATE___2_2f_00534f88,(double)_DAT_006c900c);
  FUN_0048e970(auStack_80,DAT_005b2770,0x1c,iVar3,0xffffff,0xffff,0x10000,2);
  iVar2 = 0;
  iVar3 = iVar3 + uVar1 * 2;
  if (0 < local_8c) {
    do {
      FUN_0048e970(local_88,DAT_005b2770,0x1c,iVar3,0xffffff,0xffff,0x10000,2);
      iVar3 = iVar3 + uVar1;
      iVar2 = iVar2 + 1;
      local_88 = local_88 + local_84;
    } while (iVar2 < local_8c);
  }
  return;
}

