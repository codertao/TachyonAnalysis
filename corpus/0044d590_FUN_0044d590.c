
void FUN_0044d590(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  DAT_005927c4 = 0;
  ibrowse_SetCallback(5,0);
  ibrowse_SetCallback(1,0);
  ibrowse_SetCallback(2,0);
  ibrowse_SetCallback(3,0);
  while (DAT_00562c98 != 0) {
    Sleep(0);
  }
  puVar3 = &DAT_00591150;
  iVar2 = 6;
  DAT_00562c98 = 0;
  do {
    FUN_004acf80(puVar3);
    FUN_0049c530(*puVar3);
    puVar4 = puVar3 + -4;
    puVar3 = puVar3 + 0xb;
    iVar2 = iVar2 + -1;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  } while (iVar2 != 0);
  if (DAT_005927cc != 0) {
    FUN_0049c530(DAT_005927cc);
    DAT_005927cc = 0;
  }
  FUN_0044d300(0);
  return;
}

