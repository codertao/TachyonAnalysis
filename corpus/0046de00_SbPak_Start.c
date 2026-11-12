
/* sweep */

void SbPak_Start(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = DAT_00589754;
  SbPak_SetActive(0,0);
  iVar1 = DAT_005635c4;
  while( true ) {
    DAT_005635c4 = iVar1;
    if (iVar2 == 0) goto LAB_0046de3c;
    iVar1 = __stricmp(iVar2,param_1);
    if (iVar1 == 0) break;
    iVar2 = *(int *)(iVar2 + 0x60);
    iVar1 = DAT_005635c4;
  }
  iVar1 = *(int *)(iVar2 + 0x10);
  puVar4 = (undefined4 *)(iVar2 + 0x14);
  puVar5 = &DAT_00587880;
  DAT_005635c4 = iVar1;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
LAB_0046de3c:
  if ((iVar1 != 0) || (iVar1 = SbPak_LoadModel(param_1,param_2), DAT_005635c4 = iVar1, iVar1 != 0))
  {
    puVar4 = &DAT_00587880;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    DAT_00587880 = 0x90;
    DAT_00587884 = 0x10000;
    DAT_005878c0 = iVar1;
    Model_SelectState(&DAT_00587880,0);
    SbPak_SetPos(param_4,param_5,param_6);
    SbPak_UpdateTransform(param_3);
  }
  return;
}

