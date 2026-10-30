
void FUN_004b99a0(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar2 = 0x1f;
  if (param_4 != 0) {
    for (; param_4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  param_3._0_1_ = (undefined1)iVar1;
  iVar1 = param_1 * 0x28;
  *(undefined4 *)(&DAT_006c90c0 + iVar1) = param_2;
  param_4._0_1_ = (undefined1)iVar2;
  (&DAT_006c90c8)[iVar1] = (undefined1)param_3;
  (&DAT_006c90c9)[iVar1] = (undefined1)param_4;
  (&DAT_006c90cc)[param_1 * 10] = 0x100602;
  (&DAT_006c90dc)[param_1 * 10] = 0;
  puVar3 = (undefined4 *)(&DAT_006c90c0 + iVar1);
  puVar4 = (undefined4 *)(&DAT_006c9600 + iVar1);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}

