
void FUN_0043bc70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_90 [18];
  undefined1 local_48 [68];
  undefined4 local_4;
  
  uVar1 = load_rtxt_bin(param_2,0xa000);
  *(undefined4 *)(param_1 + 4) = uVar1;
  iVar5 = 0;
  for (iVar2 = Rtxt_GetCount(uVar1); iVar2 != 0; iVar2 = iVar2 + -1) {
    while (iVar3 = Rtxt_GetRecord(*(undefined4 *)(param_1 + 4),iVar5), iVar3 == 0) {
      iVar5 = iVar5 + 1;
    }
    iVar3 = Rtxt_GetKeyName(*(undefined4 *)(param_1 + 4),iVar5);
    if (iVar3 != 0) {
      puVar6 = local_90;
      for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_4 = 2;
      str_sprintf(local_90,&DAT_00536768,iVar3);
      str_sprintf(local_48,&DAT_0053fe80,iVar5);
      FUN_0043bd30(param_1,local_90);
    }
    iVar5 = iVar5 + 1;
  }
  return;
}

