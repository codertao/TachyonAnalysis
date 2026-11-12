
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: slot 0x34, IDirectPlay3A::EnumSessions */

undefined4 DPlay_EnumSessions(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = DAT_0052e8c8;
  if (DAT_0055e3e0 != 0) {
    puVar3 = &DAT_005b9c60;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    _DAT_005b9c78 = DAT_0052e8c0;
    _DAT_005b9c84 = DAT_0052e8cc;
    DAT_005b9c60 = 0x50;
    _DAT_005b9c7c = DAT_0052e8c4;
    _DAT_005b9c80 = uVar1;
    iVar2 = (**(code **)(*DAT_005b9af4 + 0x34))
                      (DAT_005b9af4,&DAT_005b9c60,0,DPlay_EnumSessionsCb,0,0xd1);
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 == -0x7788fea2) {
      return 1;
    }
  }
  return 0xffffffff;
}

