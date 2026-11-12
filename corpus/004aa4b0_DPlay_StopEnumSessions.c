
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: slot 0x38 */

void DPlay_StopEnumSessions(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = DAT_005b9af4;
  if (DAT_005b9af4 != (int *)0x0) {
    puVar3 = &DAT_005b9c60;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    _DAT_005b9c78 = DAT_0052e8c0;
    _DAT_005b9c7c = DAT_0052e8c4;
    DAT_005b9c60 = 0x50;
    _DAT_005b9c80 = DAT_0052e8c8;
    _DAT_005b9c84 = DAT_0052e8cc;
    (**(code **)(*piVar1 + 0x34))(piVar1,&DAT_005b9c60,0,DPlay_EnumSessionsCb,0,0xe1);
  }
  return;
}

